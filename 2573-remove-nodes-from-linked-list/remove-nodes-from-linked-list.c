/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* Reverse(struct ListNode* head) {
    struct ListNode* prev = NULL;
    struct ListNode* curr = head;
    while (curr != NULL) {
        struct ListNode* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
struct ListNode* removeNodes(struct ListNode* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    // Reverse the list
    head = Reverse(head);
    struct ListNode* node = head;
    struct ListNode* temp = head->next;
    int max = head->val;
    while (temp != NULL) {
        if (temp->val >= max) {
            // Keep the node
            max = temp->val;
            node->next = temp;
            node = temp;
        }
        else {
            // Remove the node
            struct ListNode* remove = temp;
            temp = temp->next;
            node->next = temp;
            free(remove);
            continue;
        }
        temp = temp->next;
    }
    // Reverse back
    head = Reverse(head);
    return head;
}