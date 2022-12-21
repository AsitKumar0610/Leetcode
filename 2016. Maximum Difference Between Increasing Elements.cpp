class Solution {
public:
    int maximumDifference(vector<int>& a) {
        int i,j,ans=0,n=a.size(),f=0;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                
                if(a[j]>a[i]){
                    f++;
                    ans = max(ans, a[j]-a[i]);
                }       
            }
        }
        if(f>0)
        return ans;
        return -1;
    }
};
