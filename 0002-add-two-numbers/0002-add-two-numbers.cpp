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
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* t1=NULL,*l3=NULL,*p=NULL;
    
    if(l1==NULL && l2==NULL)  return NULL;
    if(l1==NULL) return l2;
    if(l2==NULL) return l1;
    int sum=0,carry=0;
    while(l1!=NULL&& l2!=NULL){
        sum=l1->val+l2->val+carry;
        carry=sum/10;
        p=(struct ListNode*)malloc(sizeof(struct ListNode));
        p->val=sum%10;
        p->next=NULL;
        if(l3==NULL){
            l3=p;
            t1=p;
        }
        else{
            t1->next=p;
            t1=p;            
        }
        l1=l1->next;
        l2=l2->next;
    }
    while(l1!=NULL){
        sum=l1->val+carry;
        carry=sum/10;
        p=(struct ListNode*)malloc(sizeof(struct ListNode));
        p->val=sum%10;
        p->next=NULL;
        if(l3==NULL){
            l3=p;
            t1=p;
        }
        else{
            t1->next=p;
            t1=p;            
        }
        l1=l1->next;
    }
    while(l2!=NULL){
        sum=l2->val+carry;
        carry=sum/10;
        p=(struct ListNode*)malloc(sizeof(struct ListNode));
        p->val=sum%10;
        p->next=NULL;
        if(l3==NULL){
            l3=p;
            t1=p;
        }
        else{
            t1->next=p;
            t1=p;            
        }
        l2=l2->next;
    }
    if(carry){
        p=(struct ListNode*)malloc(sizeof(struct ListNode));
        p->val=carry;
        p->next=NULL;
        t1->next=p;
    }
    return l3;
}
