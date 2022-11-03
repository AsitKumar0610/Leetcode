class Solution {
public:
    int countHousePlacements(int n) {
        long a=1,b=1,mod=1e9+7;
        long temp=0;
        for(int i=0;i<n;i++)
        {
            temp=(a+b)%mod;
            a=b%mod;
            b=temp%mod;
        }
        return ((temp%mod)*(temp%mod))%mod;
    }
};
