/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    if(k==0 || head==NULL|| head->next==NULL){
        return head;
    }
    struct ListNode* slow=head;
    struct ListNode*fast=head;
    int len=0;
    while(slow!=NULL){
        len++;
        slow=slow->next;
    }
    slow=head;
    k=k%len;
    if(k==0){
        return head;
    }
    for(int i=0;i<k;i++){
        fast=fast->next;
    }
    while(fast->next!=NULL){
        slow=slow->next;
        fast=fast->next;
    }
    struct ListNode *newHead=slow->next;
    fast->next=head;
    slow->next=NULL;
    return newHead;
}