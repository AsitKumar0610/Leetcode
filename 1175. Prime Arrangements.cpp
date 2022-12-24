private:
    unsigned long M=1000000007;
public:
    int numPrimeArrangements(int n) {
        vector<bool> v(n+1,false);
        int cnt=0,res=1;
        for(int i=2;i<n+1;i++){
            if(v[i]==false) cnt++;
            for(int j=2;i*j<n+1;j++) v[i*j]=true;
        }
        for(int i=2;i<=cnt;i++) res=((res%M)*i)%M;
        for(int i=2;i<=n-cnt;i++) res=((res%M)*i)%M;
        return res;
    }
