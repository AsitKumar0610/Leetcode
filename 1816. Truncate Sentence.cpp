class Solution {
public:
    string truncateSentence(string s, int k) {
        string str = "";
        int count = 0;
        for(auto i:s){
            if(i == ' '){
                count++;
            }
            if(count != k){
                str += i;
            }
            else break;
        }return str;
    }
};
