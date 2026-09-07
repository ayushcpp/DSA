/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    int count=0;
    struct ListNode* temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    temp=head;
    if((count-n)==0){
        temp=temp->next;
        return temp;
    }
    for(int i=1;i<(count-n);i++){
        temp=temp->next;
    }
    if(temp->next!=NULL && temp->next->next!=NULL)
    temp->next=temp->next->next;
    else{
        temp->next=NULL;
    }
    return head;
}