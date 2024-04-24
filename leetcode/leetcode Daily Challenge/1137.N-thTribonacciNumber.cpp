class Solution {
public:
    long long tribonacci(int n) {
        int r0 = 0;
        int r1 = 1;
        int r2 = 1;
        if(!n) return 0;
        if(n <= 2) return 1;
        for(int i = 3; i <= n; i++) {
            int r3 = r0+r1+r2;
            r0 = r1;
            r1= r2;
            r2 = r3;
        }
        return r2;
    }
};
