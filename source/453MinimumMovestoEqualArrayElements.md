
``` C++
class Solution {
public:
    int minMoves(vector<int>& nums) {

        return accumulate(nums.begin(),nums.end(),0)-*min_element(nums.begin(),nums.end())*nums.size();
    }
};

```


```
int res;
int sum = accumulate(nums.begin(),nums.end(),0);
int minnum = *min_element(nums.begin(),nums.end()); //return iterator,so need to add *
int size = nums.size();
res = sum -minnum*size;
return res;
```


## solution2

>let’s define sum as the sum of all the numbers, before any moves; minNum as the min number int the list; n is >the length of the list;

>After, say m moves, we get all the numbers as x , and we will get the following equation

>sum + m * (n - 1) = x * n
>and actually,

>x = minNum + m
>and finally, we will get

 > sum - minNum * n = m
>So, it is clear and easy now.



Adding 1 to (n-1) elements is equivalent to subtracting 1 from one of the elements and adding 1 to all elements. Adding 1 to all elements does not change anything in terms of equality. So we must find the min number of (subtract 1 from any element) operations. The only way to make all elements equal this way is to make them all equal to the min element of the array.
Hence, number of moves = sum(array) - n*min_element
```
class Solution {
public:
    int minMoves(vector<int>& nums) {
       int n = nums.size();
       if(n <= 1)
          return 0;
       int mn = nums[0];
       long sum = nums[0];
       for(int i = 1; i < n; ++i)
       {
           mn = min(mn,nums[i]);
           sum += nums[i];
       }
       return sum -long(mn)*long(n); //也就是把除了最小的数的其他书与最小数之差 再加起来。对 2,1,3来说，走的步数为 (2-1)+(3-1) = sum(2,1,3)-1  -(n-1)*1
    }
};

```
