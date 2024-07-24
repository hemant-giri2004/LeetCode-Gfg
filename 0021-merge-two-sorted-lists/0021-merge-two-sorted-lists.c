/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    if(list1==0 && list2==0)
        return 0;
    if(list1==0)
        return list2;
    if(list2==0)
        return list1;
    struct ListNode *t=list1,*c=list1;
    int temp;
    while(t->next!=0)
        t=t->next;
    t->next=list2;
    c=list1;
    while(c->next){
        t=c->next;
        while(t){
            if(c->val > t->val){
                temp=c->val;c->val=t->val;t->val=temp;
            }
            t=t->next;
        }
        c=c->next;
    }
    return list1;
}