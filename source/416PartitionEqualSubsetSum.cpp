
/*https://discuss.leetcode.com/topic/63049/my-simple-c-dp-code-with-comments*/

class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if (sum & 1) return false;
        int half = sum >> 1;

        vector<bool> accessibility(half + 1, false);
        accessibility[0] = true;    // '0' is always reachable
        //For all num in nums, check the accessibility from half - num to 0.
        //If 'i' is accessible by former numbers, then 'i + num' is also accessible. (DP Algorithm)
        for(auto num : nums)
       //Below here we must start from 'half' downto 'num', otherwise current 'num' might be multiply used.
       //e.g.: If num == 2, then we will have 2, 4, 6... will all be accessible and lead to wrong answer.
            for(int i = half; i >= num; i--){
                if (accessibility[i - num] == true){
                    accessibility[i] = true;
                }
            }
        return accessibility[half];
    }
};

/*
bits的第i位为1的话表示此数组里面存在组合使得该组合的和为i。
此处采用归纳法简单的分析下算法：
1.假设n之前的子列里面存在1~m,k~L……之间和的组合
2.填加了数字n之后，将会存在(1+n)~(m+n),(k+n)~(L+n)……之间和的组合（只要在上面的组合里面添加当前的元素n即可），在标记bits里面相当于将bits向左边移动n位，即bits << n
3.故目前为止，存在1~m,k~L……以及(1+n)~(m+n),(k+n)~(L+n)……之间和的组合
4.故bits |= bits << n

*/
// 同样是采用位的概念，每一位代表 是否有组合的和  is reachable or not
class Solution {
public:
	bool canPartition(vector<int>& nums) {
		const int MAX_NUM = 100;
		const int MAX_ARRAY_SIZE = 200;
		bitset<MAX_NUM*MAX_ARRAY_SIZE / 2 + 1> bits(1);
		int sum = 0;
		for (auto& n : nums) {
			sum += n;
			bits |= bits << n;
		}
		return !(sum % 2) && bits[sum / 2];
	}
};
