class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count , result = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            count = 0;
            while(nums[i] > 0){
                count++;
                nums[i] = nums[i]/10 ;
            }
            if(count % 2 == 0){
                result++ ;
            }   
        }return result ;
    }
};
