/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode* p1=head,*p2=head->next;
    while(p2){
        p1=p1->next;
        if(p2->next)    p2=p2->next->next;
        else    p2=p2->next;
    }
    return p1;
}