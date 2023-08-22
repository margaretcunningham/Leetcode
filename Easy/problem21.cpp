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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1==nullptr) return list2;
        if (list2==nullptr) return list1;
        ListNode *l = new ListNode();
        if (list1->val<=list2->val){l->val=list1->val;list1=list1->next;} 
        else {l->val=list2->val;list2=list2->next;}
        ListNode *ret=l;
        while(list1!=nullptr && list2!=nullptr) {
            if (list1->val <= list2->val) {
                ListNode *temp = new ListNode(list1->val);
                l->next =temp;
                l=l->next;
                list1=list1->next;
            }
            else {
                ListNode *temp = new ListNode(list2->val);
                l->next =temp;
                l=l->next;
                list2=list2->next;
            }
            
        }
        if (list1==nullptr) l->next = list2;
        else l->next = list1;
        return ret;
    }
};
