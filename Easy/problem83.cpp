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
    set<int> a;
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr) return head;
        if (head->next == nullptr) return head;
        a.insert(head->val);
        if (a.count(head->next->val) > 0) {
            head->next = head->next->next;
            deleteDuplicates(head);
        } else {
            deleteDuplicates(head->next);
        }
        return head;
    }
};
