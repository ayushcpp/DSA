/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* oddEvenList(struct ListNode* head) {
    if(head==NULL || head->next==NULL){
        return head;
    }
    struct ListNode * even=head->next;
    struct ListNode *odd =head;
    struct ListNode*evenHead=head->next;
    while(even!=NULL && odd!=NULL){
        if(odd->next!=NULL && even->next!=NULL){
            odd->next=even->next;
            odd=odd->next;
            even->next=odd->next;
            even=even->next;
        }
        else{
            break;
        }
    }
    odd->next=evenHead;
    if(even!=NULL){
        even->next=NULL;
    }
    return head;
}