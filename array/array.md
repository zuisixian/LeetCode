

# [565. Array Nesting](https://leetcode.com/problems/array-nesting/)

## 思路
1. 重头到位遍历，把已经方位的数组加到map中，直到访问到map中已经存在同样的数字时，结束当前遍历，统计当前的长度。


这个算法在java里超时了，但是在C++里没有超时

``` Java
    public int arrayNesting(int[] nums) {
        if(nums.length == 0)
            return 0;
        Map<Integer, Integer>  visited = new HashMap<>();
        int res=0;

        for(int i = 0;i<nums.length;i++) {
            // Map不用清空的
            // visited.clear();
            int t = 0;
            int current = nums[i];
            
            while (!visited.containsKey(current)) {
                visited.put(current, 1);
                t++;
                current = nums[current];
            }

            res = Math.max(res, t);
        }
        return res;
    }

```