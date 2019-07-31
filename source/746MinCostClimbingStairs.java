class Solution {
    public int minCostClimbingStairs(int[] cost) {
        if (cost.length == 0) {
            return 0;
        }

        if(cost.length == 1) {
            return cost[0];
        }

        if (cost.length == 2)
            return Math.min(cost[0], cost[1]);

        int[] step = new int[cost.length +1];

        step[0] = 0;
        step[1] = 0;

        // 动态规划，当前i的花费等于i-1的值加上其cost或者i-2的值加上其cost
        for (int i = 2; i <= cost.length; i++) {
            step[i] = Math.min(step[i-1] + cost[i-1], step[i-2] + cost[i-2]);
        }

        return step[cost.length];
    }
}


