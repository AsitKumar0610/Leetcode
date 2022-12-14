class Solution {
public:
    vector<string> findWords(vector<string>& words) {
   
        unordered_set<char> r1{'q','w','e','r','t','y','u','i','o','p'};
        unordered_set<char> r2{'a','s','d','f','g','h','j','k','l'};
        unordered_set<char> r3{'z','x','c','v','b','n','m'};
        
        vector<string> ans;
        
        for(auto &st:words)
        {
            bool f,s,t;
            f=s=t=false;
            
            for(auto &c: st)
            {
                if(r1.find(tolower(c)) != r1.end())
                    f=true;
                else if(r2.find(tolower(c)) != r2.end())
                    s=true;
                else if(r3.find(tolower(c)) != r3.end())
                    t=true;
            }

            if(f && !s && !t)
                ans.push_back(st);
            else if(!f && s && !t)
                ans.push_back(st);
            else if(!f && !s && t)
                ans.push_back(st);
        }
        return ans;
    }
};
