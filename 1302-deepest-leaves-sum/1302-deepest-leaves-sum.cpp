/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int sum = 0, maxLevel = INT_MIN;
    void helper(TreeNode* u, int level){
        if(u==NULL){
            return;
        }
        if(level > maxLevel){
            sum = u->val;
            maxLevel = level;
        }
        else if(level==maxLevel){
            sum += u->val;
        }
        helper(u->left, level+1);
        helper(u->right, level+1);
    }
    int deepestLeavesSum(TreeNode* root) {
        helper(root, 0);
        return sum;
    }
};