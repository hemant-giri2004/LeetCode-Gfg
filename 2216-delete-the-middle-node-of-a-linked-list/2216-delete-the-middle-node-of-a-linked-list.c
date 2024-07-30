/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteMiddle(struct ListNode* head) {
    struct ListNode* t=head,*p2=head->next;
    int n=0;
    while(t){
        n++;
        t=t->next;
    }
    t=head;
    int mid=n/2;
    if(n==0||n==1)
        return NULL;
    if(n==2){
        head->next=NULL;
        return head;
    }
    for(int i=1;i<mid;i++)
        t=t->next;
    t->next=t->next->next;
    return head; 
}