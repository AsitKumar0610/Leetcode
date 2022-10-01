class Solution {
public:
    string toGoatLatin(string s) {
        stringstream str(s);
        string words,ans;
        int cnt=2;
        while(str>>words){
            if(words[0]=='a' || words[0]=='i' || words[0]=='o' || words[0]=='u' || words[0]=='e' || words[0]=='A' || words[0]=='I' || words[0]=='O' || words[0]=='U' || words[0]=='E')
                ans+=" "+words+'m'+string(cnt++,'a');
            else ans+=" "+words.substr(1)+words[0]+'m'+string(cnt++,'a');
        }
        return ans.substr(1);
    }
};
