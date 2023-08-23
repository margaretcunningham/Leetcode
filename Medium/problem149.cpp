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
    ListNode *detectCycle(ListNode *head) {
        set<ListNode*> s;
        while(s.count(head)==0) {
            if(head==nullptr) return NULL;
            s.insert(head);
            head=head->next;
        }
        return head;
    }
};
