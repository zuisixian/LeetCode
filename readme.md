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

## 2019/1/15

* [423. Reconstruct Original Digits from English](https://leetcode.com/problems/reconstruct-original-digits-from-english/description/)

找到每个数字英文字母的特殊性，也就是独有的字母，如果字母非独有，那就总数减去已知数字中含有该字母的数量。

## 2019/1/16
* [453. Minimum Moves to Equal Array Elements](https://leetcode.com/problems/minimum-moves-to-equal-array-elements/description/) [**solution**](/source/453MinimumMovestoEqualArrayElements.md)
数学问题

## 2019/1/17
* [443. String Compression](https://leetcode.com/problems/string-compression/description/)     [**solution**](/source/443StringCompression.md)


## 2019/1/18
*  [445. Add Two Numbers II](https://leetcode.com/problems/add-two-numbers-ii/discuss/92624/)

[**solution**](/source/445AddTwoNumbersII.md)

## 2019/1/19

*   [402. Remove K Digits](https://leetcode.com/problems/remove-k-digits/description/)

[**Solution**](source/402RemoveKDigits.md)

## 2019/1/20

* [403. Frog Jump](https://leetcode.com/problems/frog-jump/)
[solution](source/403FrogJump.cpp)

TODO:使用DFS 外加 map来记录在每个位置不同步长情况下是否能到达对端。
 map<int,bool> m; key = i + step<<11;

## 2019/1/21

* [437. Path Sum III](https://leetcode.com/problems/path-sum-iii/description/)
[solution](source/437PathSumIII.md)

使用递归方法

## 2019/1/22

* [438. Find All Anagrams in a String](https://leetcode.com/problems/find-all-anagrams-in-a-string/description/)
[solution](source/438FindAllAnagramsInAString.md)

## 2019/1/23
* [441. Arranging Coins](https://leetcode.com/problems/arranging-coins/description/)
[solution](source/441ArrangingCoins.md)

## 2019/1/24

* [442. Find All Duplicates in an Array](https://leetcode.com/problems/find-all-duplicates-in-an-array/description/)
[solution](source/442FindAllDuplicatesinanArray.cpp)

## 2018/1/25

*  [697. Degree of an Array](https://leetcode.com/problems/degree-of-an-array/description/)

[solution](source/697DegreeofanArray.cpp)

## 2018/1/26

* [450. Delete Node in a BST](https://leetcode.com/problems/delete-node-in-a-bst/description/)
[solution](source/450DeleteNodeinaBST.cpp)

## 2018/1/27
* [654. Maximum Binary Tree](https://leetcode.com/problems/maximum-binary-tree/description/)
**TODO** 复习map相关用法
使用`stack`，维持stack里面是降序的，也就是第一个数(栈底)是最大的(root)，然后新的数与栈顶-->栈底的数以此比较，如果新的数较小，直接push_back，设为栈顶数的rightchild,如果比栈的数大，这栈的数为新数的leftchild，pop_back，然后push_back新数。
[solution](source/654MaximumBinaryTree.md)

## 2018/1/28

[669. Trim a Binary Search Tree](https://leetcode.com/problems/trim-a-binary-search-tree/description/) [solution](source/669TrimaBinarySearchTree.cpp)

## 2018/1/29

[653. Two Sum IV - Input is a BST](https://leetcode.com/problems/two-sum-iv-input-is-a-bst/description/) [soluiton](source/653TwoSumIV-InputisaBST.md)

二叉搜索树
## 2018/1/30

[538. Convert BST to Greater Tree](https://leetcode.com/problems/convert-bst-to-greater-tree/description/)
[solution](source/538.ConvertBSTtoGreaterTree.cpp)
inorder search
