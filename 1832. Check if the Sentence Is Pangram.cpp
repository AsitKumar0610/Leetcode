class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char,bool>seen;
        for(auto c:sentence)
            seen[c]=1;
        return seen.size()==26;        
    }
};
