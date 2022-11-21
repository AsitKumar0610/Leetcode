class Solution {
public:
    int minBitFlips(int start, int goal) {
		//we are using XOR operator to check if the two values are unequal
        int n= start ^ goal;
		//initialising the variable cnt=0 to maintain the record of count
        int cnt=0;
        int i=0; 
        while(i<32){ //here 32 is the size of int in bits
		
            /*here we are right-shifting in the binary and comparing each bit with & operator and checking if it is equal to 1 and if it is true excel the count and store the value in it*/
			 if(((n>>i)&1)==1){
                cnt++;
            }
            i++;
        }
        return cnt; //here returning the count.
    }
};
