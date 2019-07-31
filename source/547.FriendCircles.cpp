


class Solution {
public:
    void dfs_fri(vector<vector<int>>& graph, vector<bool>& visited, int cur) {
        if(!visited[cur]) {
            visited[cur] = true;
            for(int i = 0;i<graph[cur].size();i++) {
                if(!visited[i] && graph[cur][i] ==1){
                    dfs_fri(graph, visited, i);
                }
            }
        }
    }
    
    
    int findCircleNum(vector<vector<int>>& M) {
        int ans = 0;
        vector<bool> circle(M.size(), false);
        
        for(int i =0;i<circle.size();i++) {
            if(!circle[i]) {
                dfs_fri(M,circle,i);
                ans++;
            }
        }
        return ans;
    }
};
