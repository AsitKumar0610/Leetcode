class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int count = 0;
     for(int i = 0 ; i < nums.size() ;i++){
         count = 0;
         if (nums.size() % 2 == 0){
             for(int j = 0 ; j < nums.size() ; j++){
                 if(nums[j] == nums[i]){
                     count++;
                 }
             }
             if(count % 2 != 0){
                return false;
             }
         }
     }   return true;
    }
};
