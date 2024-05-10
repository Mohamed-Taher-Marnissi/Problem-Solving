class Solution {
public:
    static bool customSort(pair<int,int> &p1 , pair<int,int> &p2) {
        return ((float)p1.first / p1.second) < ((float)p2.first / p2.second);
    }
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        vector<pair<int,int>> res;
        for(int i = 0; i < arr.size(); i++) {
            for(int j = arr.size()-1; j > i; j--) {
                res.push_back({arr[i],arr[j]});
            }
        }
        sort(res.begin() , res.end() , customSort);
        return {res[k-1].first,res[k-1].second};
    }
};
