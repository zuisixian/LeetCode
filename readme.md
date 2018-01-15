## 2018/1/2

* 完成401题

## 2018/1/3

* [404 Sum of Left leaves](https://leetcode.com/problems/sum-of-left-leaves/description/)


直接使用递归，3行就可以解决.

- [] 可以使用循环或者BFS来做？

- [] 使用python来做？

## 2018/1/4
* [405 Convert a Number to Hexadecimal](https://leetcode.com/problems/convert-a-number-to-hexadecimal/description/)

count++<8 因为每次处理4为，int总共32位，一共8次就可以处理完。
 0xF的二进制为0b1111, 所以每四位bits&0xf就等于他自己。

## 2018/1/5
* [406. Queue Reconstruction by Height](https://leetcode.com/problems/queue-reconstruction-by-height/discuss/89345/)

[思路](https://leetcode.com/problems/queue-reconstruction-by-height/discuss/89345/)

先把身高最高的先排序，k值大的靠后。
然后把第二高的插入进去。
依次第三、第四...完成排序。

## 2018/1/6

* [409. Longest Palindrome](https://leetcode.com/problems/longest-palindrome/description/)

统计数量为奇数的字符，然后用总的字符减去这些数量再+(奇数>0)
## 2018/1/7

* [412. Fizz Buzz](https://leetcode.com/problems/fizz-buzz/description/)
比较简单，可以看看C语言/python怎么写的。

## 2018/1/8

* [415 Add Strings](https://leetcode.com/problems/add-strings/description/)

直接从低位(string中索引最高)相加，最后reverse。

* [43 Multiply Strings](https://leetcode.com/problems/multiply-strings/description/)
之前校招已经刷过一次，有时间再刷一回
> [参考blog](http://www.cnblogs.com/grandyang/p/4395356.html)

## 2018/1/9

* [414 Third Maximum Number](https://leetcode.com/problems/third-maximum-number/description/)

需要熟练使用标准库，set刚好非常适用于此题。也可以适用vector,自己手动维护里面3个值得大小顺序。

## 2019/1/10

*  [416. Partition Equal Subset Sum](https://leetcode.com/problems/partition-equal-subset-sum/description/)

> bits的第i位为1的话表示此数组里面存在组合使得该组合的和为i。

## 2019/1/11
* [434. Number of Segments in a String](https://leetcode.com/problems/number-of-segments-in-a-string/description/)

这个题比较简单

## 2019/1/12
* [417. Pacific Atlantic Water Flow](https://leetcode.com/problems/pacific-atlantic-water-flow/description/)
DFS算法，需要好好研究相关问题

## 2019/1/13
待完成

## 2019/1/14
* [448. Find All Numbers Disappeared in an Array](https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/description/)

同[442Find All Duplicates in an Array](https://leetcode.com/problems/find-all-duplicates-in-an-array/.)
遍历 index为value-1处将value置位相反数，那么1-n中没有遍历的index初的值就还是正数，这些值就是nums中没有出现的值。

## 2019/1/5

* [423. Reconstruct Original Digits from English](https://leetcode.com/problems/reconstruct-original-digits-from-english/description/)

找到每个数字英文字母的特殊性，也就是独有的字母，如果字母非独有，那就总数减去已知数字中含有该字母的数量。
