/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverse(struct ListNode *head){
    struct ListNode * prev=NULL;
    struct ListNode * curr=head;
    while(curr!=NULL){
        struct ListNode *next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
bool isPalindrome(struct ListNode* head) {
    struct ListNode *slow=head;
    struct ListNode *fast=head;
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    slow=slow->next;
    slow=reverse(slow);
    struct ListNode* left = head;
    struct ListNode* right = slow;
    while(right!=NULL){
        if(left->val!=right->val){
            reverse(slow);
            return false;
        }
        left=left->next;
        right=right->next;
    }
    reverse(slow);
    return true;
}