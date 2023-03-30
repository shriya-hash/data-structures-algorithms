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
    bool isSymmetric(TreeNode* root) {
        if(!root)
        return false;

        return issame(root->left, root->right);
    }

    bool issame(TreeNode* rootleft,TreeNode* rootright)
    {
        if(!rootleft || !rootright)
        return !rootleft && !rootright;
        else if(rootleft->val==rootright->val)
        {
            return issame(rootleft->left,rootright->right) && issame(rootleft->right,rootright->left);
        }
        else
        return false;
    }
};
