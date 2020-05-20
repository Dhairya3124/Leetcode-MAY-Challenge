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
    void inorder(TreeNode* root,int &k,int &count,int &val)
    {
        if(count>k)
            return;
        if(root==NULL)
            return;
        else
        {
            inorder(root->left,k,count,val);
            count++;
            if(count==k)
                val=root->val;
            inorder(root->right,k,count,val);
        }
            
    }
    int kthSmallest(TreeNode* root, int k) {
        int count=0,val=-1;
        inorder(root,k,count,val);
        return val;
    }
};
