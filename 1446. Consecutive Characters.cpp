class Solution {
public:
    int maxPower(string s) {
        char c = s[0];
        int count = 0 , result = 0;
         for(int i = 0 ; i < s.length() ; i++)
        {
             if(s[i] != c){
                 c = s[i] ;
                 count = 0 ;
             }
             count++;
             if(count > result){
                 result = count ;
             }
        }return result ;
    }
};
