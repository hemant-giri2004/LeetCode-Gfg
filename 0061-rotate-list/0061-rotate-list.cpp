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
    ListNode* rotateRight(ListNode* head, int k) {
      if (!head || !head->next || k == 0) return head;

        // Find the length of the linked list
        ListNode* curr = head;
        int length = 1;
        while (curr->next) {
            curr = curr->next;
            length++;
        }

        // Make the list circular
        curr->next = head;

        // Find the new head and the new tail
        k = k % length;  // Handle the case where k >= length
        int stepsToNewHead = length - k;

        // Move to the new tail (just before the new head)
        curr = head;
        for (int i = 1; i < stepsToNewHead; i++) {
            curr = curr->next;
        }

        // The new head is the next node, and break the circular link
        ListNode* newHead = curr->next;
        curr->next = nullptr;

        return newHead;
    }
};