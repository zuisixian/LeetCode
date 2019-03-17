class Solution {
public:
    int count = 0;
    int countArrangement(int N) {
        if( N == 0) return 0;
        int ans = 0;
        
        //pos 从0 开始的，
        visited = vector<int>(N+1,0);
        dfs(N,ans,1);
        return ans;
        
    }
    
private:
    //1到N中已经使用的数字。
    vector<int> visited;
    
    
    void dfs(int n, int& ans, int pos) {
        //表示之前的都满足要求，已经遍历完.
        if(pos > n) {
            ans++;
            return;
        }
        
        for(int i = 1;i<=n;i++) {
            if( !visited[i] && (i%pos == 0 || pos %i == 0)) {
                visited[i] = 1;
                dfs(n, ans, pos +1);
                visited[i] = 0;
            }
        }
    }
    
};