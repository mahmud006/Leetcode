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
    TreeNode* generateTree(vector<int>& preorder, vector<int>& inorder, int L, int R, int &pos, unordered_map<int, int>&mp){
        if(L>R) return NULL;
        auto currRoot = new TreeNode(preorder[pos++]);
        int M = mp[currRoot->val];
        currRoot->left = generateTree(preorder, inorder, L, M-1, pos, mp);
        currRoot->right = generateTree(preorder, inorder, M+1, R, pos, mp);
        return currRoot;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int pos = 0;
        unordered_map<int, int> mp;
        for(int i = 0; i<inorder.size(); i++){
            mp[inorder[i]] = i;
        }
        return generateTree(preorder, inorder, 0, preorder.size()-1, pos, mp);
    }
};