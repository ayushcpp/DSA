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
    struct ListNode*temp=head;
    int size=0,capacity=2;
    int *arr;
    arr=malloc(capacity*sizeof(int));
    while(temp->next!=NULL){
        if(temp->next->next!=NULL){
            if(size==capacity){
                capacity*=2;
                int *newArr=realloc(arr,capacity*sizeof(int));
                arr=newArr;
            }
            arr[size]=temp->next->next->val;
            size++;
            temp=temp->next->next;
        }
        else{
            break;
        }
    }
    temp=head->next;
    while(temp != NULL) {
        if(size == capacity) {
            capacity *= 2;
            int *newArr = realloc(arr, capacity * sizeof(int));
            arr = newArr;
        }

        arr[size] = temp->val;
        size++;

        if(temp->next == NULL)
        break;

        temp = temp->next->next;
    }
    temp=head->next;
    int i=0;
    while(temp!=NULL && i<size){
        temp->val=arr[i];
        temp=temp->next;
        i++;
    }
    free(arr);
    return head;
}