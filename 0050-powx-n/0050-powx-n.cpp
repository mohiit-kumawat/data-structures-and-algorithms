class Solution {
public:
    double myPow(double x, long long n) {
        if (n == 0) 
            return 1;                 // base case
        
        if (n < 0) 
            return 1 / myPow(x, -n);   // handle negative power
        
        double half = myPow(x, n / 2);        // divide power into half
        double ans = half * half;
        
        // if odd power:
        if(n % 2 == 1)
            return x * ans;
        
        return ans;  //even me direct return!
    }
};