/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (head == NULL) return NULL;
        ListNode dummyOdd(0);
        ListNode dummyEven(0);
        ListNode* prevOdd = &dummyOdd;
        ListNode* prevEven = &dummyEven;
        int index = 0;
        while (head) {
            auto next = head->next;
            head->next = NULL;
            if (index++ & 1) {
                prevEven->next = head;
                prevEven = head;
            } else {
                prevOdd->next = head;
                prevOdd = head;
            }
            head = next;
        }
        prevOdd->next = dummyEven.next;
        return dummyOdd.next;
    }
};