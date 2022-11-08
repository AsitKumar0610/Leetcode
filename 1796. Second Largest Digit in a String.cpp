class Solution {
public:
	int secondHighest(string s) {
		int first = -1, second = -1;
		for(int i = 0; i < s.size(); i++){
			if(s[i] >= '0' and s[i] <= '9'){
				int t = s[i] - '0';
				if(t > first){
					second = first;
					first = t;
				}
				else if(t > second and t < first){
					second = t;
				}
			}
		}
		if(first != second){
			return second;
		}
		return -1;
	}
};
