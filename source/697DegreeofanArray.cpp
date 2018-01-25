
/*
在hash表中记录每个数字重复的次数，然后找到最大的degree，在最大的degree
中找到最短的subarray。

*/
class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,vector<int>> mmp;
        for(int i =0;i<nums.size();i++)
            mmp[nums[i]].push_back(i);
        int degree = 0;
        for(auto iter = mmp.begin();iter != mmp.end();iter++)
            degree = max(degree, int(iter->second.size()));
        int shortest = nums.size();
        for(auto iter = mmp.begin();iter != mmp.end();iter++){
            if(iter->second.size() == degree){
                shortest = min(shortest,iter->second.back()-iter->second[0]+1);
            }
        }
        return shortest;
    }
};
