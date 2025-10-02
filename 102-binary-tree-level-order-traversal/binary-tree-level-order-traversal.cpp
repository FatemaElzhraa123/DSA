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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>level;
        if(root==nullptr)
            return level;

        level.push_back({});
        queue<TreeNode*>q;
        q.push(root);
        level[0].push_back(root->val);
        int lev=0;
        while(!q.empty()){
            int sz=q.size();
            lev++;
            level.push_back({});
            while(sz--){
                TreeNode* current = q.front();
                q.pop();
                if(current->left!=nullptr){
                    q.push(current->left);
                    level[lev].push_back(current->left->val);
                }
                if(current->right!=nullptr){
                    q.push(current->right);
                    level[lev].push_back(current->right->val);
                }
            }
        }
        level.pop_back();
        return level;   
    }
};