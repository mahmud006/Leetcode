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
    ListNode* reverseList(ListNode* head) {
        ListNode* prv = NULL;
        auto curr = head;
        while(curr){
            auto next = curr->next;
            curr->next = prv;
            prv = curr;
            curr = next;
        }
        return prv;
    }
};