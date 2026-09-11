/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
        struct ListNode *temp=head;
        if(temp==NULL || temp->next==NULL){
            return head;
        }
        struct ListNode *prev=NULL;
        struct ListNode *first=head;
        struct ListNode *second=head->next;
        while(first!=NULL && second!=NULL){
            struct ListNode *third =second->next;
            
            second->next=first;
            first->next=third;
            if(prev!=NULL){
                prev->next=second;
            }
            else{
                head=second;
            }

            // update
            prev=first;
            first=third;
            if(third!=NULL){
                second=third->next;
            }
            else{
                second=NULL;
            }
        }
        return head;
}