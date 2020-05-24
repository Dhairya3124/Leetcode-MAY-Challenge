/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root = new TreeNode(preorder[0]);
        for(int i = 1;i<preorder.size();i++){
            TreeNode* itr = root;
            x:
            if(itr->val>preorder[i]){
                if(itr->left){
                    itr = itr->left;
                    goto x;
                }
                else{
                    itr->left = new TreeNode(preorder[i]);
                }
            }
            else{
                if(itr->right){
                    itr = itr->right;
                    goto x;
                }
                else{
                    itr->right = new TreeNode(preorder[i]);
                }
            }
        }
        return root;
    }
};
