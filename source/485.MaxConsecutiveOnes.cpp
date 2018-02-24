class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        //竟然通过了。。
        int res=0, begin=0;
        int len = nums.size();
        for(int i =0;i<len;){
            if(nums[i] &1){
                begin = i;
                while(i<len && nums[i]==1){
                    i++;
                }
                res = i-begin>res?i-begin:res;
            }else{
                i++;
            }
        }

        return res;
    }
};

int findMaxConsecutiveOnes(int* nums, int numsSize) {
 int max = 0;
 int sum = 0;
 for (int i=0; i<numsSize; i++)
 {
     sum = (sum+nums[i])*nums[i];// so brilliant
     if(max<sum){max=sum;}
 }
return max;
}
