class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        vector<int> hashtable(20001,0);// if we don't know the range, wo could use multiset.
        for(size_t i= 0;i<nums.size();i++){
            hashtable[nums[i]+10000]++;
        }
        int ret = 0;
        int flag = 0;
        for(size_t i = 0;i<20001;){
            if(hashtable[i]>0 && (flag ==0)){
                ret = ret+i-10000;// flag = 0 mean this is the smaller num in a pair。
                flag = 1;
                hashtable[i]--;
            }
            else if(hashtable[i]>0&& (flag == 1)){
                hashtable[i]--;  // flag = 1 mean this is the larger num in a pair。
                flag =0;
            }
            else
                i++;
        }
        return ret;
    }

};

//python solution
class Solution(object):
    def arrayPairSum(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        return sum(sorted(nums)[::2])
