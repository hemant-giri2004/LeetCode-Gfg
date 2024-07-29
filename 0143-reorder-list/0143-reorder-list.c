/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverse(struct ListNode* head){
    struct ListNode *list=NULL;
    while(head){
        struct ListNode *c=NULL;
        c=(struct ListNode *)malloc(sizeof(struct ListNode));
        c->val=head->val;
        c->next=list;
        list=c;
        head=head->next;
    }
    return list;
}
void reorderList(struct ListNode* head) {
    struct ListNode *h=NULL,*p1=head,*p2=head->next;
    while(p1 && p2){
        p1=p1->next;
        if(p2->next)    p2=p2->next->next;
        else    p2=p2->next;
    }
    h=reverse(p1->next);
    p1->next=NULL;
    while(h){
        p1=h;
        h=h->next;
        p1->next=head->next;
        head->next=p1;
        head=head->next->next;
    }
}