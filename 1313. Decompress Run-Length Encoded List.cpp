class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        int i = 0;
        while(i != nums.size()){
            for(int j = 0 ; j < nums[i] ; j++){
                ans.push_back(nums[i+1]);
            }i += 2 ;
        }return ans;
    }
};
