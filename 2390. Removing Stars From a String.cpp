class Solution {
public:
    string removeStars(string s) {
    string v = "";
    for(int i = 0 ; i < s.length() ; i++){
        if(s[i] != '*'){
            v.push_back(s[i]);
        }
        else {
            v.pop_back();
        }
    }return v;
    }
};
