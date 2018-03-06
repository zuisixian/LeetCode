class Solution {
public:
    int findPaths(int m, int n, int N, int i, int j) {
        uint dp[51][50][50] = {};
        for(auto Ni =1;Ni<=N;++Ni)
            for(auto mi =0;mi<m;mi++)
                for(auto ni = 0;ni<n;++ni)
                    dp[Ni][mi][ni] = ((mi==0?1:dp[Ni-1][mi-1][ni]) +(mi==m-1?1:dp[Ni-1][mi+1][ni])
                                      +(ni ==0?1:dp[Ni-1][mi][ni-1]) +(ni == n-1?1:dp[Ni-1][mi][ni+1])

                                     )%1000000007;
        return dp[N][i][j];

    }
};

//改进，步数N不再使用N，二是用两个来循环，使用

int findPaths(int m, int n, int N, int i, int j) {
	unsigned int g[2][50][50] = {};
	while (N-- > 0)
		for (auto k = 0; k < m; ++k)
			for (auto l = 0, nc = (N + 1) % 2, np = N % 2; l < n; ++l) {
				g[nc][k][l] = ((k == 0 ? 1 : g[np][k - 1][l]) + (k == m - 1 ? 1 : g[np][k + 1][l])
					+ (l == 0 ? 1 : g[np][k][l - 1]) + (l == n - 1 ? 1 : g[np][k][l + 1])) % 1000000007;
				cout <<nc<<"--"<<k<<"---"<<l<<"--->"<<g[nc][k][l] << endl;
			}


	return g[1][i][j];//如果N为奇数，那首次使用就是1，如果为偶数，那么第一次使用的index也是0，最后也是
}

int main() {
	findPaths(1, 3, 2, 0, 1);
	return 0;
}

//solution 3

class Solution {
public:
    int findPaths(int m, int n, int N, int i, int j) {
        int limit = 1000000007;
        int paths = 0;
        dfs(m, n, N, i, j, paths, limit);
        return paths;
    }

private:
    void dfs(int m, int n, int N, int i, int j, int& paths, int limit) {
        if (N > 0 && paths < limit && i >= 0 && i < m && j >= 0 && j < n) {
            if (i == 0 || i == m - 1 || j == 0 || j == n - 1) {
                paths += i == 0;
                paths += i == m - 1;
                paths += j == 0;
                paths += j == n - 1;
                if (N == 0 || paths >= limit)
                    return;
            }

            dfs(m, n, N - 1, i + 1, j, paths, limit);
            dfs(m, n, N - 1, i - 1, j, paths, limit);
            dfs(m, n, N - 1, i, j + 1, paths, limit);
            dfs(m, n, N - 1, i, j - 1, paths, limit);
        }
    }
};
