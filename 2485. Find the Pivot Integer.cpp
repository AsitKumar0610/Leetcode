class Solution {
public:
    int pivotInteger(int n) {
        int sum1 = 0;
        int sum2 = 0;
        if(n==1){
           return 1; 
        }
        for(int i = 2 ; i <= n ; i++){
            sum1 = 0;
            sum2 = 0;
            for(int j = 1 ; j <= i ; j++){
                sum1 += j;
            }
            for(int k = i ; k <= n ;k++){
                sum2 += k;
            }
            if(sum1 == sum2){
                return i;
            }
        }return -1;
    }
};
