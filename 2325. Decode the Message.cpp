class Solution {
public:
    string decodeMessage(string key, string message) {
	// storing substitution table
        unordered_map<char,char>  table;
		
	// storing first occurence of character
        unordered_map<char,char>mp;
		
		//ASCII value for 'a'=97
		int temp=97;
		
        for(int i=0; i < key.size(); i++){
            if(key[i]==' ') continue;
            if(!mp[key[i]]){
                mp[key[i]]++;
                table[key[i]]=temp;
                temp++;
            }
        }
        string ans;
        for(int i=0; i < message.size(); i++){
            if(isalpha(message[i])){
                ans.push_back(table[message[i]]);
            }
            else if(message[i] == ' '){
                ans.push_back(' ');
            }
        }
        return ans;
    }
};
