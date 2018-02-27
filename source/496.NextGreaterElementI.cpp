
//先把nums中每个数右边第一个比它大的数找到。用stack来实现。
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        stack<int> s;
        unordered_map<int, int> m;
        for(auto n :nums){
            while(s.size() && s.top() < n){
                m[s.top()] = n;
                s.pop();
            }
            s.push(n);
        }
        vector<int> res;
        for(auto n :findNums)
            res.push_back(m.count(n)?m[n]:-1);
        return res;
    }
};
