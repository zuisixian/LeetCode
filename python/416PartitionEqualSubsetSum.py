
# !usr/bin/env python
# -*- coding:utf-8  -*-




class Solution(object):
    def canPartition(self, nums):
        """
        :param nums: List(int)
        :return:bool
        """
        sum_val = 0
        bits = 1
        for num in nums:
            sum_val += num
            bits |= bits << num
        return bool((not sum_val&1) and (bits >> (sum_val//2)) & 1)

if __name__ == "__main__":
    print("hello")
