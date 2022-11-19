class Solution {
public:
    int rev(int i){
        int ans = 0;
        while(i > 0){
            ans *= 10;
            ans += i%10;
            i /= 10;
        }
        return ans;
    }
    
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int> s(nums.begin() , nums.end());
        for(int i = 0; i < nums.size(); i++){
            s.insert(rev(nums[i]));
        }
        return s.size();
    }
};
