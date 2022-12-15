class Solution {
public:
    int maxDistance(vector<int>& color) {
        
        int n=color.size();
        int i,j;
        int ans=INT_MIN;
        
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==j)
                    continue;
                else if(color[i]!=color[j])
                    ans=max(ans,abs(i-j));
            }
        }
        return ans;
    }
};
