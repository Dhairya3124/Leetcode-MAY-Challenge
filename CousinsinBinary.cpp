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
int level[101];
bool vis[101]={0};
int parent[101]={0};
void dfs(TreeNode* root){

     // base case   
    if(root==NULL || vis[root->val])
        return;
    else{
        vis[root->val]=1;
        if(root->left){
          // if left child exist
            parent[root->left->val]=root->val;
            level[root->left->val]=level[root->val]+1;
        }
        if(root->right){
            // if right child exist
            parent[root->right->val]=root->val;
            level[root->right->val]=level[root->val]+1;
        }
        
        dfs(root->left);
        dfs(root->right);
    }
    
}
bool isCousins(TreeNode* root, int x, int y) {
    
    level[1]=0;
    parent[1]=-1;
    dfs(root);
    
    if(level[x]==level[y] and parent[x ]!=parent[y])
        return true;
    else
        return false;
    
    
}
};
