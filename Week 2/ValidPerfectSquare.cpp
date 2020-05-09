class Solution {
public:
    bool isPerfectSquare(int num) {
        long double x;
        x=sqrt(num);
        return ((x-floor(x))==0);
    }
};