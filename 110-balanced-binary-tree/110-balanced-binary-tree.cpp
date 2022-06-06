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
    int maxHeight(TreeNode* root){
        if(!root) return 0;
        int L = maxHeight(root->left);
        int R = maxHeight(root->right);
        return max(L,R)+1;
    }
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        int L = maxHeight(root->left);
        int R = maxHeight(root->right);
        if(abs(L-R)<=1 && (isBalanced(root->left) && isBalanced(root->right))) return true;
        return false;
    }
};