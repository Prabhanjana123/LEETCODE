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
    bool isValidBST(TreeNode* root) {
        return valu(root,LLONG_MIN, LLONG_MAX);
    }
    bool valu(TreeNode * root,long  long  low , long long high ){
        if(root==nullptr){
            return  true ;
        }
        bool  left = valu(root->left,low,root->val);
        bool right = valu(root->right,root->val,high);
        if(root->val<=low || root->val >= high){
            return  false  ;
        }
        return left & right  ;
    }
};