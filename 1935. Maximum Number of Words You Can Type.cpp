class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        vector<char> broken(26, 0);
        for (auto c : brokenLetters) broken[c - 'a']++;
        
        
        int res = 0, count = 0;
        for (int i = 0; i < text.size(); i++) {
            if (text[i] == ' ') {
                if (count == 0) res++; 
                count = 0;
                continue;
            }
            
            if (broken[text[i] - 'a']) count++;
        }
        
        if (!count) res++;
        
        return res;
    }
};
