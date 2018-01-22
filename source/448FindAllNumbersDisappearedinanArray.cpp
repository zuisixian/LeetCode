/*
First iteration to negate values at position whose equal to values appear in array.
 Second iteration to collect all position whose value is positive, which are the
  missing values. Complexity is O(n) Time and O(1) space.

先把存在的数都变为相反数，那么不存在的数就还是正数。
*/

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int len = nums.size();

        for(int i = 0;i<len;i++){
            int m = abs(nums[i])-1; //index
            nums[m] = nums[m]>0?-nums[m]:nums[m];
        }

        vector<int> res;
        for(int i =0;i<len;i++){
            if(nums[i]>0){
                res.push_back(i+1);
            }
        }
        return res;
    }
};
