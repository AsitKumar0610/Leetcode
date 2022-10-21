class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        unordered_map<int,int> mp;
        
        for(int i=0;i<nums.size();i++) {
            
            if(mp.find(nums[i])!=mp.end()) {  //check if the element is in map or not 
                if(abs(i-mp[nums[i]])<=k)    //at mp [ nums[i] ] we have the last index of that element, get difference of that value and current index we are on
                    return true; 
            }   
            mp[nums[i]]=i;  //element :  index
        } 
        return false; 
    }
};
