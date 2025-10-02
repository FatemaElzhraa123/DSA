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
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*>st;
        vector<int>ans;

        st.push(root);
        while(!st.empty()){
            root = st.top();
            while(root!=nullptr && root->left!=nullptr){
                st.push(root->left);
                root->left = nullptr;
                root = st.top();
            }
            
            if(root!=nullptr)
                ans.push_back(root->val);
            st.pop();
            if(root!=nullptr && root->right!=nullptr){
                st.push(root->right);
                root->right = nullptr;
            }
        }

        return ans ;
    }
};