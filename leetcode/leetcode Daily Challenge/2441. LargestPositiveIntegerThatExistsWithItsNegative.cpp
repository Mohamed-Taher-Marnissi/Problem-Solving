class Solution {
public:
    int findMaxK(vector<int>& nums) {
       int ans = -1;
       set<int> st;
       for(int &n : nums) {
         if(st.count(-n)) {
            ans = max(ans , abs(n));
         }
         st.insert(n);
       }
       return ans;
    }
};
