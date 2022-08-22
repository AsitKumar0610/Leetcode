class Solution {
public:
        bool isPowerOfFour(int n) 
{
	return n==1 ? true : n == 0 or n%4 != 0 ? false : isPowerOfFour(n/4);
}  
};
