/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseBetween(struct ListNode* head, int left, int right) {
    if(head==NULL || head->next==NULL ||left==right){
        return head;
    }
    struct ListNode*prev=NULL;
    struct ListNode *curr=head;
    int i=1;
    while(curr!=NULL && i!=left){
        prev=curr;
        curr=curr->next;
        i++;
    }
    struct ListNode *pointerTostart=prev;
    struct ListNode *start=curr;
    prev=NULL;
    while(curr!=NULL && left<=right){
        struct ListNode *next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        left++;
    }
    start->next=curr;
    if(pointerTostart!=NULL){
        pointerTostart->next=prev;
    }
    else{
        return prev;
    }
    return head;
}