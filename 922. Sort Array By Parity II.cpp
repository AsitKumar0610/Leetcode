class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        vector<int> odd, even, ans(A);
        for(int i =0; i< A.size(); i++){
            if(A[i]%2==0) even.push_back(A[i]);
            else odd.push_back(A[i]);
        }
        
        for(int i=0; i< A.size(); i= i+2){
            ans[i] = even.back();
            even.pop_back();
        }
        
        for(int i=1; i<A.size(); i= i+2){
            ans[i] = odd.back();
            odd.pop_back();
        }
        
        return ans;
    }
};
