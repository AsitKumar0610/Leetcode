class Solution {
public:
    string breakPalindrome(string p) {
        if(p.size()==1)
        {
            return "";
        }
        int a=0;
        for(char x: p)
        {
            if(x=='a') a++;
        }
        if(a==p.size())
            p[p.size()-1]='b';
        else if(a==p.size()-1 && p.size()&1)
        {
            if(p[p.size()/2]!='a')
                p[p.size()-1]='b';
        }
        else
        {
            for(int i=0;i<p.size()/2+1;i++)
            {
                if(p[i]!='a')
                {
                    p[i]='a';
                    break;
                }
            }
        }
        return p;
    }
};
