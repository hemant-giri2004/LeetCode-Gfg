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
    int getVal(ListNode* head,int& val,int& pos){
        if(head->next==NULL){
            val=head->val*pos;
            pos=pos<<1;
            return val;
        }
        getVal(head->next,val,pos);
        val=val+head->val*pos;
        pos=pos<<1;
        return val;
    }
    int getDecimalValue(ListNode* head) {
        int val=0,pos=1;
        getVal(head,val,pos);
        return val;
    }
};