// LEETCODE
class Solution {
    
    /**
     n >> 1 === n / 2^(1)
    */
public:
    double myPow(double x, int n) {
        if(n == 0)
            return 1;
        if(n < 0)
        {
            long long n1 = n;
            n1 = -1 * n1;
            return( 1 / (result(x,n1)));
        }
        return result(x,n);
    }
 double result(double x, long long n)
 {
     if(n == 1)
            return x;
        if(n % 2 == 0)
            return result(x * x, n>>1);
        return x * (result(x * x , n>>1 ));
 }
};


// T.C. : O(log2(n))
