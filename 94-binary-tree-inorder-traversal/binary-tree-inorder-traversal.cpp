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
    vector<int>ans;
    void dfs(TreeNode* root){
        if(root!=nullptr && root->left !=nullptr)
            dfs(root->left);
        if(root!=nullptr)
            ans.push_back(root->val);
        if(root!=nullptr &&  root->right !=nullptr)
            dfs(root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        dfs(root);
        return ans ;
    }
};