class Solution {
public:
    int maxValue(vector<vector<int>> &v, int &x , int &y ) {
        int maxV = -1;
        for(int i = x; i < x+3; i++) {
            for(int j = y; j < y+3; j++) {
                maxV = max(maxV , v[i][j]);
            }
        }
        return maxV;
    }
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> res(n-2,vector<int>(n-2,0));
        for(int i = 0; i < n - 2; i++) {
            for(int j = 0; j < n - 2;j++) {
               res[i][j]= maxValue(grid , i , j);
            } 
        } 
        return res;
    }
};
