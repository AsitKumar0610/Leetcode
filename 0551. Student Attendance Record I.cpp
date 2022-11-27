class Solution {
public:
    bool checkRecord(string s) {
        int i=0,ac=0,lc=0;
        while(i<=s.length()-1){
            if(s[i]=='A')ac++;
            if(s[i]=='L'&& s[i+1]=='L' && s[i+2]=='L')lc++;
            i++;
        }
        if(ac>1 || lc>=1)return false;
        else return true;
    }
};
