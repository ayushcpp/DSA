/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *temp=head;
    struct ListNode *prev=NULL;
    while(temp!=NULL){
        struct ListNode * front =temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;
    }
    return prev;
}