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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool res = false;
        if(p==NULL && q!=NULL) return false;
        if(p!=NULL && q==NULL) return false;
            
        if(p==NULL && q==NULL) return true;
        
        bool l = false , r = false ;
            
        if(p->val==q->val){
            l = isSameTree(p->left,q->left);
            r = isSameTree(p->right,q->right);
        }
        res = l&r;
        return res;
    }
};
