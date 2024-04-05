class Solution {
public:
    string makeGood(string s) {
        string ans = "";
        for(char& c : s) {
            if(!ans.empty() && abs(ans.back() - c) == 'a' - 'A') ans.pop_back();
            else ans.push_back(c);
        }
        return ans;
    }
};
