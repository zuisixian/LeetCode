
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
        #返回值必须转化为bool，不然输入为0或1，不是false or true。

        return boo((not sum_val&1) and (bits >> (sum_val//2)) & 1)
