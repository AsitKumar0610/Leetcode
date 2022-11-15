class Solution {
public:
    int countGoodTriplets(vector<int>& nums, int a, int b, int c) {
        int ans = 0 ;
        
        for(int i = 0 ; i < nums.size() ; ++i ){
            for(int j = i + 1 ; j < nums.size() ; ++j ){
                if(abs(nums[j]-nums[i]) > a) continue ;
                
                for(int k = j + 1 ; k < nums.size(); ++k ){
                    if(abs(nums[k] - nums[j]) > b || abs(nums[k]  - nums[i]) > c ) continue ;
                    ++ans ;
                }
            }
        }
        return ans ;
    }
};
