class Solution {
public:
    string sortSentence(string s) {
        
        vector<string>a(9);
        int index = 0,sp=0;
        string wrd = "";
        for(int i = s.length()-1;i>=0;i--)
        {
            if(s[i] >='1'&& s[i] <= '9' )
            {
                index=s[i]-'1';
                
            }
            else if(s[i]==' ')
            {
                a[index]=wrd;
			   index=0;
			   wrd="";
			   sp++;
            }
            else
            {
                wrd = s[i] + wrd;
            }
            
        }
        a[index]=wrd;
        string ans="";
		for(int i=0;i<sp+1;i++)
		{
			ans = ans + a[i];
			ans = ans + " ";
		}
		ans.pop_back();
        return ans;
    }
};
