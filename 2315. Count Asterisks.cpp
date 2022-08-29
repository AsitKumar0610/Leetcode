class Solution {
public:
    int countAsterisks(string s) {
        int count = 0 , count1 = 0 ;
        if(s.length() == 0)
            return 0 ;
        for(int i = 0 ; i < s.length() ; i++){
            if(s[i] == '|'){
                count++;
            }
            if(s[i] == '*' && count%2 == 0){
                count1++;
            }
        }return count1 ;
    }
};
