/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode dummy = {0, head};
    struct ListNode * prev=&dummy;
    while(head!=NULL){
        if(head->next!=NULL && head->val==head->next->val){
            while(head->next!=NULL && head->val==head->next->val){
                head=head->next;
            }
            prev->next=head->next;
        }
        else{
            prev=prev->next;
        }
        head=head->next;
    }
    return dummy.next;
}