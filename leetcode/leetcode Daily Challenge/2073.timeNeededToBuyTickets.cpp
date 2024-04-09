// problem link : https://leetcode.com/problems/time-needed-to-buy-tickets/

class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
       int ans = 0;
       for(int i = 0; i < k; i++) {
         ans += min(tickets[i], tickets[k]);
       }
       ans += tickets[k];
       for(int i = k + 1; i < tickets.size(); i++) {
         ans += min(tickets[i] , tickets[k] - 1);
       }
       return ans;
    }
};
