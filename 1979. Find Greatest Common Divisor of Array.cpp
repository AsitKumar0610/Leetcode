class Solution {
public:
    int findGCD(vector<int>& nums) {
        int max = nums[0] , min = nums[0] ;
        for(int i = 1 ; i < nums.size() ; i++){
            if(nums[i] > max){
                max = nums[i] ;
            }
            if(nums[i] < min){
                min = nums[i] ;
            }
        }
        for(int j = min ; j >= 1 ; j--){
            if(min % j == 0 && max % j == 0){
                return j;
            }
        }return 1;
    }
};
