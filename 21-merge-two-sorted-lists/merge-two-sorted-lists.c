/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode* t1=list1;
    struct ListNode* t2=list2;
    struct ListNode* NewNode=malloc(sizeof(struct ListNode));
    struct ListNode*temp=NewNode;
    while(t1!=NULL && t2!=NULL){
        if(t1->val<t2->val){
            temp->next=t1;
            temp=t1;
            t1=t1->next;
        }
        else{
            temp->next=t2;
            temp=t2;
            t2=t2->next;
        }
    }
    if(t1){
        temp->next=t1;
    }
    else{
        temp->next=t2;
    }
    return NewNode->next;
}