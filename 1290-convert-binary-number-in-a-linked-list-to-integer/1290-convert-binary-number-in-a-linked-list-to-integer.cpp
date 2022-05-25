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
    int getDecimalValue(ListNode* head) {
        vector<int>v;
        while(head){
            cout << head->val <<endl;
            if(head->val==1){
                v.push_back(1);
            }
            else{
                v.push_back(0);
            }
            head=head->next;
        }
        int base = 1,res=0;
        for(int i=v.size()-1; i>=0; i--){
            if(v[i]==1){
                res += base;
            }
            base = base * 2;
        }
        return res;
    }
};