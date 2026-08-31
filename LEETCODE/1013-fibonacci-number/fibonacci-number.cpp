class Solution {
public:
    int fib(int n) {
        int a=0, b=1;
        int sum = 0;
        for(int i=1; i<=n;i++){
            a = b;
            b = sum;
            sum = a + b;
        }
        return sum;
    }
};