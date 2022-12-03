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
    TreeNode* solve(int low,int high,vector<int> &nums){
        if(low > high) return nullptr;
        if(low == high) return new TreeNode(nums[low]);

        int highest = -1;
        int index = 0;

        for(int i=low;i<=high;i++){
            if(nums[i] > highest){
                highest = nums[i];
                index = i;
            }
        }

        TreeNode* root = new TreeNode(nums[index]);
        root->left = solve(low , index-1,nums);
        root->right = solve(index + 1 , high , nums);

        return root;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return solve(0 , nums.size() -1 ,nums);
    }
};
