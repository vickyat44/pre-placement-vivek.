/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
     ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode dummy;
    dummy.next = head;
    ListNode *temp = &dummy;
    ListNode *pre = &dummy;

    // Advance temp by n+1 steps.
    for (int i = 0; i <= n; i++) {
        if (temp == nullptr) {
            // Handle cases where n is greater than the number of nodes.
            return head;
        }
        temp = temp->next;
    }

    // Move temp to the end while maintaining the gap of n nodes with pre.
    while (temp != nullptr) {
        temp = temp->next;
        pre = pre->next;
    }

    // Remove the nth node from the end by updating the 'next' pointer of the node before it.
    ListNode *toRemove = pre->next;
    pre->next = toRemove->next;
    delete toRemove; // Assuming dynamic memory allocation.

    return dummy.next;
}
};