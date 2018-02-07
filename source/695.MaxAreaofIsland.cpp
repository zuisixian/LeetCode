class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int max_area =  0;
        for(int i =0;i<grid.size();i++){
            for(int j = 0;j<grid[0].size();j++)
            //找到island然后开始dfs
                if(grid[i][j] == 1)
                    max_area= max(max_area,AreaOfIsland(grid, i, j));
        }
        return max_area;
    }
private:
    int AreaOfIsland(vector<vector<int>>& grid, int i, int j){
        if(i>=0 && i<grid.size()&& j>=0 && j<grid[0].size() && grid[i][j] ==1){
            grid[i][j] = 0;//访问过的点置0反正再访问。
            return 1+AreaOfIsland(grid, i+1,j)+AreaOfIsland(grid, i-1,j)+AreaOfIsland(grid, i,j-1)+AreaOfIsland(grid, i,j+1);
        }
        return 0;
    }
};
