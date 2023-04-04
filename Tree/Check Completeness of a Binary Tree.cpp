class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
       if(!root)
       return true;
       queue<TreeNode* >q;
       q.push(root);
       bool isnull=false;
       while(!q.empty())
       {
           TreeNode* curr=q.front();
           q.pop();
           if(curr->left)
           {
               if(isnull==true)
               return false;
               q.push(curr->left);
           }
           else
           isnull=true;
           if(curr->right)
           {
               if(isnull==true)
               return false;
               q.push(curr->right);
           }
           else
           isnull=true;
       }
       return true; 
    }
};
