/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    if(head==NULL)
        return 0;
    struct ListNode *t=head,*p=NULL;
    int cnt=1;
    while(t->next){
        t=t->next;
        cnt++;  
    }  
    if(cnt>=n && n>=1)
        n=cnt-n;
    if(n==0){
        p=head;
        head=head->next;
        free(p);
        return head;
    }
    t=head;
    if(n==cnt-1){
        while(t->next->next)
            t=t->next;
        p=t->next;
        free(p);
        t->next=0;
        return head;
    }
    t=head;
    for(int i=1;i<n;i++)
        t=t->next;
    p=t->next;
    t->next=p->next;
    free(p);
    return head;
}