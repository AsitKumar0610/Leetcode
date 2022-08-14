class Solution {
public:
    bool checkString(string s) {
    int a = 0, j = 0, count ;
    for(int k = 0 ; k < s.length() ; k++){   
    if(s[k] == 'a'){    a++;    }
    if(a == s.length()){    return true;    }
    }
    while(s[j] != 'b'){
        j++;
    }
     for(int i = 0 ; i < s.length() ;i++){
         if(s[i] == 'a' && i > j){  return false;   }
     }return true;
    }
};
