class Solution {
public:
    int balancedStringSplit(string s) {
        int count = 0 , R = 0 , L = 0 ;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == 'R'){
                R++;
            }else{
                L++;
            }
            if(R == L){
                count++;
            }
        }return count ;
    }
};
