
//for every row, whenever add a brick, record the end position as +1.
//goal is to find the position where most row have a break on that position.
class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        
        if(wall.size()<1) return 0;
        unordered_map<int,int> ends;
        int maxend = 0;
        for(int i= 0;i<wall.size();i++) {
            int rowSum = 0;
            for(int j = 0;j<wall[i].size()-1;j++){
                ends[rowSum +=wall[i][j]]++;
                maxend = max(maxend,ends[rowSum]);
            }
        }
        return wall.size()- maxend;
        
        
    }
};