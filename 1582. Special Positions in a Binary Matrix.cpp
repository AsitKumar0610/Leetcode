class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size(), sumC = 0, tempC = 0, cnt = 0;
        vector<int>sum(m,0);
        for(int i = 0; i < mat.size(); i++)
            sum[i] = accumulate(mat[i].begin(), mat[i].end(), 0);
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                sumC += mat[j][i];
                if(mat[j][i] == 1 && sum[j] == 1)
                    ++tempC;
            }
            if(tempC == 1 && sumC ==1)
                cnt++;
            tempC = 0, sumC = 0;
        }
        return cnt;
    }

};
