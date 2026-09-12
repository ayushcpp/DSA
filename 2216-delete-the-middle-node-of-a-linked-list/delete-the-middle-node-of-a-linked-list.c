/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteMiddle(struct ListNode* head) {
    struct ListNode*slow=head;
    struct ListNode*fast=head->next;
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    slow->next=slow->next->next;
    return head;
}