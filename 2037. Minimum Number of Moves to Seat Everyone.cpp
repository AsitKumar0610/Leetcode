class Solution {
public:
    int minMovesToSeat(vector<int>& nums, vector<int>& std) 
    {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        sort(std.begin(),std.end());
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans+=abs(nums[i]-std[i]);
        }
        return ans;
    }
};
