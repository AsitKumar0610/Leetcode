class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        for(int i = 0 ; i < letters.size() ; i++){
            char min = target ;
            if(int(letters[i]) > int(target)){
                if(min == target || int(min) > int(letters[i])){
                    min = letters[i];
                }
                return min;
            }
        }
        return letters[0];
    }
};
