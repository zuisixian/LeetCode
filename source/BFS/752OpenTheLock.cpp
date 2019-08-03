class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        unordered_set<string> deadlock(deadends.begin(), deadends.end());
        if (deadlock.count("0000")) return -1;
        int res = 0;
        unordered_set<string> visited{{"0000"}};
        // BFS
        queue<string> q{{"0000"}};
        while (!q.empty()) {
            ++res;
            //直接把上一轮的先遍历完，k = q.size()保持不变，但是q的大小会一直变化。
            for (int k = q.size(); k > 0; --k) {
                auto t = q.front(); q.pop();
                for (int i = 0; i < t.size(); ++i) {
                    for (int j = -1; j <= 1; j+=2) {
                        string str = t;
                        //通过先加10然后取余来避免边界情况
                        str[i] = ((t[i] - '0') + 10 + j) % 10 + '0';
                        if (str == target) return res;
                        if (!visited.count(str) && !deadlock.count(str)) q.push(str);        
                        visited.insert(str);
                    }
                }
            }
        }
        return -1;
    }
};

