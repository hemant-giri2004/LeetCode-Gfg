/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode *t=NULL;
    while( head && head->val==val)
        head=head->next;
    t=head;
    while(t){
        while(t->next && t->next->val==val){
            t->next=t->next->next;
        }
        t=t->next;
    }
    return head;
}