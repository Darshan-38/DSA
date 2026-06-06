// Last updated: 6/7/2026, 12:02:20 AM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     struct ListNode *next;
6 * };
7 */
8bool hasCycle(struct ListNode *head) {
9    struct ListNode *slow = head;
10    struct ListNode *fast = head;
11
12    while (fast != NULL && fast->next != NULL) {
13        slow = slow->next;          // move 1 step
14        fast = fast->next->next;    // move 2 steps
15
16        if (slow == fast) {
17            return true;            // cycle found
18        }
19    }
20
21    return false;                   // no cycle
22}