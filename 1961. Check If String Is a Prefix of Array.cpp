class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
       string ans="";
        map<string,int>harsh;
        harsh[s]++;
        for(auto val : words )
        {
            ans+=val;
            if(harsh.find(ans) != harsh.end())
            {
                return true;
            }
        }
        return false;
    }
};
