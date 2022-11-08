class Solution {
public:
    int commonFactors(int a, int b) {
        int n = min(a, b);
        int count = 0;
        for(int i = 1; i <= n/2 ; i++){
            if(a%i == 0 && b%i == 0){
                count++;
            }
        }
        if(a%b == 0 || b%a==0){
            count++;
        }return count;
    }
};
