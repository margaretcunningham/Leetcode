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
    ListNode* removeElements(ListNode* head, int val) {
            

        
            while (head!=nullptr && head->val == val) {
                head = head->next;
            }
            if (head == nullptr) return head;
            if (head->next == nullptr) return head;
        
            if (head->next->val == val) {
                head->next = head->next->next;
                if (head->next == nullptr) return head;
                removeElements(head, val);
            } else {
                if (head->next == nullptr) return head;
                removeElements(head->next, val);
            }
            
            if (head->val == val) {
                cout << "ya";
            }
        return head;
    }
};
