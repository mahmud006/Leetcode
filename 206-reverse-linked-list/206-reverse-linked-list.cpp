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
    ListNode* l1 = new ListNode(NULL);
    void insertAtHead(int val)
    {
        ListNode *newNode = new ListNode(val);
        ListNode *prevHeadNext = l1->next;
        l1->next = newNode;
        newNode->next = prevHeadNext;
    }
    ListNode* reverseList(ListNode* head) {
        while(head!=NULL){
            insertAtHead(head->val);
            head = head->next;
        }
        l1 = l1->next;
        return l1;
    }
};