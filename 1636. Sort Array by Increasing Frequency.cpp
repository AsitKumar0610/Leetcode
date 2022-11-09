class Solution {
public:
    vector<int> frequencySort(vector<int>& arr) {
        
        unordered_map<int,int> mp;       
        
        for(int i = 0;i < arr.size();i++){
            mp[arr[i]]++;
        }
        
        map<int,vector<int>> temp;       
        
        for(auto it : mp){          
            temp[it.second].push_back(it.first);
        }
        
        arr = {};
        for(auto it : temp){
            sort(it.second.begin(),it.second.end());        
            for(int i = it.second.size() - 1;i >= 0;i--){
                for(int j = 0;j < it.first;j++)
                    arr.push_back(it.second[i]);
            }
        }
        
        return arr;
    }
};
