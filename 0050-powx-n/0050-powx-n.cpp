class Solution {
public:
    double myPow(double x, long long n) {
        if (n == 0) 
            return 1;                 // base case
        
        if (n < 0) 
            return 1 / myPow(x, -n);   // handle negative power
        
        double half = myPow(x, n / 2);        // divide power into half
        
        if (n % 2 == 0)
            return half * half;              // even power
        else
            return half * half * x;          // odd power
    }
};