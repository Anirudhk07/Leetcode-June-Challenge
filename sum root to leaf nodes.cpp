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
    int sum(TreeNode* root , int val)
    {
        if(root==NULL)
            return 0;
        val = val*10+root->val;
        if(root->left==NULL && root->right==NULL)
            return val;
        
        return sum(root->left,val)+sum(root->right,val);
    }
    int sumNumbers(TreeNode* root) {
      
    return sum(root,0);
        
    }
};
