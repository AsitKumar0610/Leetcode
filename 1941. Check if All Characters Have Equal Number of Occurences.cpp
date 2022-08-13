class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int count , result = 0 ;
        for(int i = 0 ; i < s.length() ; i++){
            count = 0 ;
            for(int j = 0 ; j < s.length() ; j++){
                if(s[j] == s[i]){
                    count++;
                }
            }if(result == 0){
                result = count ;
            }
            if(result != count){
                return false ;
            }
        }return true;
    }
};
