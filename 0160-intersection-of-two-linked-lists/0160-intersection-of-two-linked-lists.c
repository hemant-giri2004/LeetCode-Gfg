/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *p1=headA,*p2=headB;
    while(p2 && p1){
        if(p2==p1)
            return p1;
        p2=p2->next;
        if(!p2){
            p2=headB;
            p1=p1->next;
        }       
    }
    return NULL; 
}