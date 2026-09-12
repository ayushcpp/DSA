/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode * Reverse(struct ListNode *head){
    struct ListNode *prev=NULL;
    struct ListNode*curr=head;
    while(curr!=NULL){
        struct ListNode*next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    l1=Reverse(l1);
    l2=Reverse(l2);
    struct ListNode dummy={0,NULL};
    struct ListNode *temp=&dummy;
    int carry=0;
    while(l1!=NULL || l2!=NULL || carry){
        int sum=carry;
        if(l1!=NULL){
            sum+=l1->val;
            l1=l1->next;
        }
        if(l2!=NULL){
            sum+=l2->val;
            l2=l2->next;
        }
        carry=sum/10;
        sum=sum%10;
        temp->next=malloc(sizeof(struct ListNode));
        temp=temp->next;
        temp->val=sum;
        temp->next=NULL;
    }
    return Reverse(dummy.next);
}