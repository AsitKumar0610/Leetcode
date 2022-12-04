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
    vector<TreeNode*> allPossibleFBT(int n) {
        vector<TreeNode*> ans;
        if(n==1){
            ans.push_back(new TreeNode(0));
            return ans;
        }
        for(int i = 1; i < n; i+= 2){
            vector<TreeNode*> t1 = allPossibleFBT(i);            
            vector<TreeNode*> t2 = allPossibleFBT(n-1-i);
            for(auto &i: t1){
                for(auto &j: t2){
                    TreeNode* root = new TreeNode(0);
                    root->left = i;
                    root->right = j;
                    ans.push_back(root);
                }
            }
        }
        return ans;
    }
};
