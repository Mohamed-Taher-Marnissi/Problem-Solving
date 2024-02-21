class Solution {
public:
    bool isPowerOfTwo(int n) {
        // (n-1) and n equals 0, indicating that n has only one '1' bit in its binary representation (which is a characteristic of powers of two)
        return (n > 0 && ((n-1)&n) == 0);
    }
};
