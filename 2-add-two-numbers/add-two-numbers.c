/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int carry = 0;
    struct ListNode dummy;
    struct ListNode *temp = &dummy;
    dummy.next = NULL;
    while (l1 != NULL || l2 != NULL || carry != 0) {
        int sum = carry;

        if (l1 != NULL) {
            sum += l1->val;
            l1 = l1->next;
        }
        if (l2 != NULL) {
            sum += l2->val;
            l2 = l2->next;
        }
        temp->next = malloc(sizeof(struct ListNode));
        temp = temp->next;
        temp->val = sum % 10;
        carry = sum / 10;
        temp->next = NULL;
    }
    return dummy.next;
}