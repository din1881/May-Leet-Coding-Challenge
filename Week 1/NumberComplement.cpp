class Solution {
public:
    int findComplement(int n) 
    {
	int mask = 0, temp=n;
	while( temp ) {
		temp = temp >> 1;
		mask = mask << 1;
		mask = mask | 1;
	}
	return ~n & mask;  
    }

};