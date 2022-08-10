class Solution {
public:
    int findLucky(vector<int>& arr) {
        int count = 0 , result = 0;
        for(int i = 0 ; i < arr.size () ; i++){
            count = 0 ;
            for(int j = 0 ; j < arr.size() ; j++){
                if(arr[i] == arr[j])
                {
                    count++;
                }
            }
             if(count == arr[i] && count >= result){
                    result = count ;
                }
        }if(result != 0){   return result ; }
        else{   return -1 ; }
    }
};
