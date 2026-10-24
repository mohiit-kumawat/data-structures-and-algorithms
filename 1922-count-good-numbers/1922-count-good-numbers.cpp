class Solution {
public:

    long long MOD = 1e9 + 7;

    long long power(long long x, long long n){

        if(n == 0)
            return 1;
        
        long long half = power(x, n/2);
        long long result = (half*half) % MOD;

        if(n%2 == 1){
            result = (result * x) % MOD;
        }

        return result;
    }

    int countGoodNumbers(long long n) {

        long long evenPos = (n+1)/2;
        long long oddPos = n/2;

        long long evenWays = power(5, evenPos);
        long long oddWays = power(4, oddPos);

        return (evenWays*oddWays) % MOD;
    }
};