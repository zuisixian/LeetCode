#!usr/bin/env python3
# -*- coding:utf-8 -*-

from collections import defaultdict

class Solution(object):
    def numberOfArithmeticSlices(self, A):
        """
        :type A: List[int]
        :rtype: int
        """
        dp = [defaultdict(int) for i in range(len(A))]
        res = 0
        for i in range(1,len(A)):
            for j in range(i):
                step = A[i]-A[j]
                dp[i][step]+=1
                if step in dp[j]:
                    dp[i][step]+=dp[j][step]
                    res +=dp[j][step]
        return res;

if __name__ == "__main__":
    sol = Solution()
    sol.numberOfArithmeticSlices([2,4,6,8,10])