class Solution {
public:
    int totalMoney(int n) {
        int start = 1 , money = start, count = 0;
        
        for(int i = 1 ; i <= n ; i++){
         if(i % 7 == 1 && i != 1){
             start++ ;
             money = start ;
         }
        
         count += money ;
         money++;
        }return count ;
    }
};
