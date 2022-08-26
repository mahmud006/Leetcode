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
        auto L = head;
        auto R = head;
        while(n--){
            R = R->next;
        }
        
        if(!R) return head->next;
        while(R->next){
            L = L->next;
            R = R->next;
        }
        L->next = L->next->next;
        return head;
    }
};