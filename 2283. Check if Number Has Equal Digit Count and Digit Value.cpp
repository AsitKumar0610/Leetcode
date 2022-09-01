class Solution {
public:
    bool digitCount(string num) {
        int count;
        for(int i = 0 ; i < num.length() ; i++){
            count = 0;
            for(int j = 0 ; j < num.length() ; j++){
                if(num[j] -'0' == i){
                    count++;
                }
            }
            if(num[i] -'0' != count){ return false; }
        }return true;
    }
};
