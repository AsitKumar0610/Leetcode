class Solution {
public:
    void generate(vector<string> &v,string ans,int n ,int m){
        
        if(n==0 && m == 0){
            v.push_back(ans);
            return;
        }
        
        if(m > 0) generate(v, ans + ")", n, m-1);
        if(n > 0) generate(v, ans + "(", n-1, m+1);
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        generate(res,"",n,0);
        return res;
    }
};
