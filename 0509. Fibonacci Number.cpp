class Solution {
public:
    int fib(int n) {
        int i = 1 , s = 0 , s1 = 1 ; long s2 = 0 ;
        if(n < 2) {
            return n ;
        }
        while(i != n){
            s2 = s + s1 ;
            s= s1 ;
            s1 = s2 ;
            i++ ;
        }
        return s2 ;
    }
};
