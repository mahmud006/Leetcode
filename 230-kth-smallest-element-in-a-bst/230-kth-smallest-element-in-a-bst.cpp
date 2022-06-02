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
    void runInorder(TreeNode* root, int &k, int &kthValue){
        if(!root) return;
        runInorder(root->left, k, kthValue);
        k--;
        if(k==0){
            kthValue = root->val;
            return;
        }
        runInorder(root->right, k, kthValue);
    }
    int kthSmallest(TreeNode* root, int k) {
        int kthValue;
        runInorder(root, k, kthValue);
        return kthValue;
    }
};