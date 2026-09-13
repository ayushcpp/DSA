/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 struct ListNode *newNode(struct ListNode*head){
    struct ListNode * List;
    List=malloc(sizeof(struct ListNode));
    List->val=0;
    List->next=NULL;
    return List;
 }
struct ListNode* partition(struct ListNode* head, int x) {
    struct ListNode*temp=head;
    struct ListNode*small;
    struct ListNode *large;
    small=newNode(small);
    large=newNode(large);
    struct ListNode *smallp=small;
    struct ListNode *largep=large;
    while(temp!=NULL){
        if(temp->val<x){
            smallp->next=temp;
            smallp=smallp->next;
            temp=temp->next;
        }
        else{
            largep->next=temp;
            largep=largep->next;
            temp=temp->next;
        }
    }
    smallp->next=large->next;
    largep->next=NULL;
    return small->next;
}