class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int count = 0 , sum = 0;
     for(int i = 0 ; i < nums.size() ; i++)
     {   count = 0 ;
         for(int j = 0 ; j < nums.size() ; j++)
         {
             if(nums[j] == nums[i]){
                 count++ ;
             }
         }
         if (count == 1){
             sum += nums[i] ;
         }
     }return sum ;
    }
};
