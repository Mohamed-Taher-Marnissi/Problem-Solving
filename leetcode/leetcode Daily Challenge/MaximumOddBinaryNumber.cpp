// problem link : https://leetcode.com/problems/maximum-odd-binary-number/
class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int res = count(s.begin() , s.end() , '1');
        for(auto &c : s) {
            if(c == '1') c = '0';
        }
        s[s.length() - 1] = '1';
        res--;
        for(int i = 0; i < res; i++) {
            s[i] = '1';
        }
        return s;
    }
};
