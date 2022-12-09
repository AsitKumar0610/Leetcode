class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
        int n = nums.size(),ans=0;
        vector<int>y = nums;
        while(n>1){
            
            vector<int>x(n/2);
            for(int i=0;i<n/2;++i){
                if(i%2){
                    x[i] = max(y[2*i],y[2*i+1]);
                }
                else x[i] = min(y[2*i],y[2*i+1]);
            }
            ans = x[0];
            n/=2;
            y.clear();
            y = x;
        }
        return ans;
    }
};
