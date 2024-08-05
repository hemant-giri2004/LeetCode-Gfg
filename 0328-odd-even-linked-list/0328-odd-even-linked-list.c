/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* oddEvenList(struct ListNode* head) {
    int cnt=0;
    if(head==0) return 0;
    if(head->next==0) return head;
    struct ListNode *h=head->next,*t1=head,*t2=head->next;
    while(t1){
        cnt++;
        if(cnt%2==0){
            t2->next=t2->next->next;
            t2=t2->next;
        }
        else{
            if(t1->next!=0)
                t1->next=t1->next->next;
            t1=t1->next;
        }
    }
    t1=head;
    while(t1->next){
        t1=t1->next;
    }
    t1->next=h;
    return head;
}