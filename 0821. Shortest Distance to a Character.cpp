class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
            int n = s.size(), pos = -n;
        vector<int> dist(n, n);
        for (int i = 0; i < n; ++i) {
            if (s[i] == c){
                pos = i;}
            
            dist[i] = i - pos;
        }
        for (int i = pos - 1; i >= 0; --i) {
            if (s[i] == c) {
                pos = i;}
            dist[i] = min(dist[i], pos - i);
        }
        return dist;
    }
};
