/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {

    if(head==NULL || head->next==NULL)
        return false;
    struct ListNode *p1=head,*p2=head;
    while(p2!=NULL && p2->next!=NULL){
        p1=p1->next;
        p2=p2->next->next;
        if(p1==p2)
            return true;
    }
    return false;
}