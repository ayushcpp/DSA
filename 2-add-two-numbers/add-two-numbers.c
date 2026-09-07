/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int carry=0,sum=0;
    struct ListNode * t1=l1,*t2=l2;
    struct ListNode *NewNode=malloc(sizeof(struct ListNode));
    struct ListNode * temp=NewNode;
    while(t1!=NULL && t2!=NULL){
        sum=t1->val +t2->val +carry;
        t1->val=sum%10;
        carry=sum/10;
        temp->next=t1;
        temp=t1;
        t1=t1->next;
        t2=t2->next;
    }
    while(t1){
        sum=t1->val+carry;
        t1->val=sum%10;
        carry=sum/10;
        temp->next=t1;
        temp=t1;
        t1=t1->next;
    }
    while(t2){
        sum=t2->val+carry;
        t2->val=sum%10;
        carry=sum/10;
        temp->next=t2;
        temp=t2;
        t2=t2->next;
    }
    if(carry){
        temp->next=malloc(sizeof(struct ListNode));
        temp=temp->next;
        temp->next=NULL;
        temp->val=carry;
    }
    return NewNode->next;
}