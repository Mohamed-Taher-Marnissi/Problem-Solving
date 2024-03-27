// problem link : https://leetcode.com/problems/find-all-duplicates-in-an-array/

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> duplicates;
        for(int n : nums) {
            n = abs(n);
            if(nums[n - 1] > 0) nums[n - 1] *= -1;
            else duplicates.push_back(n);
        }
        return duplicates;
    }
};
