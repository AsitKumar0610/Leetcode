class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int,int> m;
        
        for(auto &i:tasks)
            m[i]++;
        
        int ans = 0;
        
        for(auto &i:m)
        {
            if(i.second < 2) return -1;
            
            ans+= i.second/3;
            
            if(i.second % 3) ans++;
        }      
        
        return ans;        	
    }
};
