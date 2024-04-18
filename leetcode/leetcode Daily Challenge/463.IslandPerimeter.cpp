class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int p = 0;
        for(int i=0;i<grid.size();i++){
            for(int j=0; j<grid[i].size(); j++){
                if(grid[i][j]){
                    if(j-1<0 || (j-1>=0 && !grid[i][j-1])) p++;
                    if(j+1 == grid[i].size() || (j+1<grid[i].size() && !grid[i][j+1])) p++;
                    if(i-1<0 || (i-1>=0 && !grid[i-1][j])) p++;
                    if(i+1 == grid.size() || (i+1<grid.size() && !grid[i+1][j])) p++;
               }
            }
        }    
        return p;
    }
};
