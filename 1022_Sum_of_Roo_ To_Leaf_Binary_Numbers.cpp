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
    int ans =0;
public:


    int sumRootToLeaf(TreeNode* root) {
        int sum =0;
        dfs(root,sum);
        return ans;
    }
    void dfs(TreeNode* root,int sum){
        sum = 2*sum+root->val;
        if(!root->left && !root->right){
            ans+=sum;
            return;
        }
        if(root->left) dfs(root->left,sum);
        if(root->right) dfs(root->right,sum);
    }

};
