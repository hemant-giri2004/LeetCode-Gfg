/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    
    bool isPalindrome(ListNode* head) {
        ListNode *slow=head,*fast=head;
        while(fast && fast->next){
            fast=fast->next->next;
            slow=slow->next;
        }

        stack <int >st;
        while(slow){
            st.push(slow->val);
            slow=slow->next;
        }

        slow=head;
        while(!st.empty()){
            if(st.top()!=slow->val)
                return false;
            slow=slow->next;
            st.pop();
        }
            return true;
    }
};