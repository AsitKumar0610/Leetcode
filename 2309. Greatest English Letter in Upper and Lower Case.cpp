class Solution {
public:
    string greatestLetter(string s){
        int a[26] = {};
        int A[26] = {};
        
        for(char &c : s){
            if(c >= 'a' && c <= 'z'){
                ++a[c - 'a'];
            }
            else{
                ++A[c - 'A'];
            }
        }
        string result = "";
        for(int i = 0; i < 26; i++){
            if(A[i] > 0 && a[i] > 0){
                result = char('A' + i);
            }
        }return result;
    }
};
