## 2018/1/2

* 完成401题

## 2018/1/3

* [404 Sum of Left leaves](https://leetcode.com/problems/sum-of-left-leaves/description/)


直接使用递归，3行就可以解决.

-[] 可以使用循环或者BFS来做？

-[] 使用python来做？

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

## 2018/1/31

[572. Subtree of Another Tree](https://leetcode.com/problems/subtree-of-another-tree/description/)
[solution](source/572SubtreeofAnotherTree.md)

**TODO** 月度总结

## 2018/2/1
[455. Assign Cookies](https://leetcode.com/problems/assign-cookies/description/)

[solution](source/455.AssignCookies.md)
**todo**复习`[priority_queue](notes/priority_queue学习总结.md)`用法

## 2018/2/2
[454. 4Sum II](https://leetcode.com/problems/4sum-ii/description/)
[solution](source/454.4SumII.cpp)
[pysolution](python/454.4SumII.py)

todo:**Python Algorithm: Mastering Basic Algorithms in the Python Language**

## 2018/2/3
[658. Find K Closest Elements](https://leetcode.com/problems/find-k-closest-elements/description/)
[solution](source/658.%20Find%20K%20Closest%20Elements.cpp)
二分法查找arr[index]，比arr[index+k]离x更近。

## 2018/2/4

[567. Permutation in String](https://leetcode.com/problems/permutation-in-string/description/)
[solution](source/567.PermutationinString.cpp)

[参考](https://leetcode.com/problems/permutation-in-string/discuss/102590/8-lines-slide-window-solution-in-Java)

## 2018/2/5

[446. Arithmetic Slices II - Subsequence](https://leetcode.com/problems/arithmetic-slices-ii-subsequence/description/)

[cpp solution](source/446.ArithmeticSlicesII-Subsequence.cpp)

[python solution](python/446.ArithmeticSlicesII-Subsequence.py)
> DP[i][d] = the number of arithmetic subsequences ending with A[i], difference is d. (NOTE here the length of valid subsequences can be 2)

[参考](https://leetcode.com/problems/arithmetic-slices-ii-subsequence/discuss/92850/O(N2)-MLETLE-in-C++-Try-this-one-Concise-and-Fast.)

## 2018/2/6
[463. Island Perimeter](https://leetcode.com/problems/island-perimeter/description/)
[solution](source/463.IslandPerimeter.cpp)

## 2018/2/7
[695. Max Area of Island](https://leetcode.com/problems/max-area-of-island/description/)
[solution](source/695.MaxAreaofIsland.cpp)

## 2018/2/8
[747. Largest Number At Least Twice of Others](https://leetcode.com/problems/largest-number-at-least-twice-of-others/description/)
[solution](source/747.LargestNumberAtLeastTwiceofOthers.cpp)

## 2018/2/9
[561. Array Partition I](https://leetcode.com/problems/array-partition-i/description/)
[solution](source/561.ArrayPartitionI.cpp)

**TODO**
复习multiset的用法。


## 2018/2/11

[458. Poor Pigs](https://leetcode.com/problems/poor-pigs/description/)

[solution](source/458.PoorPigs.md)

好惨的猪。。

## 2018/2/12

prepare to go home!

## 2018/2/23

2018年，开工！

[476. Number Complement](https://leetcode.com/problems/number-complement/description/)

[solution](source/476.NumberComplement.cpp)

1. 使用mask来标记leading zero.
2. 按位XOR(i<<num).

## 2018/2/24
[485. Max Consecutive Ones](https://leetcode.com/problems/max-consecutive-ones/description/)
[solution](source/485.MaxConsecutiveOnes.cpp)

``` C++
for (auto& item:nums)
{
    sum = (sum+item)* item;// so brilliant
    if(max<sum){max=sum;}
}
//so clover
```
## 2018/2/24


[500. Keyboard Row](https://leetcode.com/problems/keyboard-row/description/)  [solution](source/500.KeyboardRow.cpp)

``` python
class Solution(object):
    def findWords(self, words):
        """
        :type words: List[str]
        :rtype: List[str]
        """
        return filter(re.compile('(?i)([qwertyuiop]*|[asdfghjkl]*|[zxcvbnm]*)$').match,words)

**TODO** `(?i)`是什么意思
```

## 2018/2/26

* [482. License Key Formatting](https://leetcode.com/problems/license-key-formatting/description/)
[solution](source/482.LicenseKeyFormatting.cpp)

从end->start处理然后再reverse。

## 2018/2/27
*  [496. Next Greater Element I](https://leetcode.com/problems/next-greater-element-i/description/)
[solution](source/496.NextGreaterElementI.cpp)

## 2018/2/28
*   [504. Base 7](https://leetcode.com/problems/base-7/description/)
[solution](source/504.Base7.cpp)

## 2018/3/1
*  [507. Perfect Number](https://leetcode.com/problems/perfect-number/description/)
[solution](source/507.PerfectNumber.cpp)

## 2018/3/2
* [520. Detect Capital](https://leetcode.com/problems/detect-capital/description/)

[solution](source/520.DetectCapital.cpp)

* 可以使用正则表达式
`regex_match(word, regex("[A-Z]+|[a-z]+|[A-Z][a-z]*"))`

## 2018/3/3
* [541. Reverse String II](https://leetcode.com/problems/reverse-string-ii/description/)

[solution](source/541.ReverseStringII.cpp)

## 2018/3/4
* [543. Diameter of Binary Tree](https://leetcode.com/problems/diameter-of-binary-tree/description/)

[solution](source/543.DiameterofBinaryTree.cpp)

## 2018/3/5

* [515. Find Largest Value in Each Tree Row](https://leetcode.com/problems/find-largest-value-in-each-tree-row/description/)

[solution](source/515.FindLargestValueinEachTreeRow.cpp)

## 2018/3/6
* [576. Out of Boundary Paths](https://leetcode.com/problems/out-of-boundary-paths/description/)

[solution](source/576.OutofBoundaryPaths.cpp)

## 2018/3/7
* [501. Find Mode in Binary Search Tree](https://leetcode.com/problems/find-mode-in-binary-search-tree/description/)

[solution](source/501.FindModeinBinarySearchTree.cpp)

## 2019/3/10

* [551. StudentAttendanceRecordI](https://leetcode.com/problems/student-attendance-record-i/)

**思路**： 直接判断是否有两个`A`或者连续3个`L`

[solution](source/551StudentAttendanceRecordI.cpp)

## 2019/3/11

* [552. Student Attendance Record II](https://leetcode.com/problems/student-attendance-record-ii/)

**思路**:动态规划，太难了。。

[solution](source/552.StudentAttendanceRecordII.cpp)

## 2019/3/12
* [553. Optimal Division](https://leetcode.com/problems/optimal-division/)

**思路**:
1. 这个答案是固定的，x1/x2/x3..../xn,其中x1肯定是被除数，x2肯定是除数，要想最大化，就需要将x3,x4
, x5 都是成绩，也就是这样的结果： x1/(x2/x3/.../xn) = x1/x2  *x3* x4* ...* xn;
2. 可以使用[动态规划](https://leetcode.com/problems/optimal-division/discuss/207538/C%2B%2B-DP-0-ms-beats-100)

[solution](source/553.OptimalDivision.cpp)

## 2019/3/13
* [554.Brick Wall](https://leetcode.com/problems/brick-wall)

**思路**: 对每行从左到右记录每块砖的累计长度，用map来表示每个距离出现的次数，遍历所有行，得到每个距离与其出现的次数，取最大者，用总函数减去该值即可

[solution](source/554.BrickWall.cpp)

## 2019/3/14

* [506. Relative Ranks](https://leetcode.com/problems/relative-ranks/)

**思路**:使用优先队列来排序，存储nums[i]和其位置i

[solution](source/506.RelativeRanks.cpp)

## 2019/3/15

* [547. Friend Circles](https://leetcode.com/problems/friend-circles/)

**思路**:
1. 动态规划
2. *todo*:并查集


[solution](source/547.FriendCircles.cpp)

## 2019/3/16

* [513. Find Bottom Left Tree Value](https://leetcode.com/problems/find-bottom-left-tree-value/)


**思路**:
1. 从右往左边，宽度优先搜索加入队列中，则队列中最后的指就是最底层中最左边的值。
2. 深度优先搜索，同depth中只取最左边的值。

[solution](source/513.FindBottomLeftTreeValue.cpp)

## 2 2019/3/17
* [526. Beautiful Arrangement](https://leetcode.com/problems/beautiful-arrangement/)
**思路**:在每个位置尝试每个number,使用dfs来遍历，已经遍历过的数组用visited数组来标记，知道全部完成遍历


[solution](source/526.BeautifulArrangement.cpp)

## 2019/3/18

* [557. Reverse Words in a String III](https://leetcode.com/problems/reverse-words-in-a-string-iii/)
**思路**:
1. 使用streamstream来分割字符串.

[solution](source/557.ReverseWordsinaStringIII.cpp)


## 2019/3/19
* [592. Fraction Addition and Subtraction](https://leetcode.com/problems/fraction-addition-and-subtraction/)

**思路**:
1. 使用streamstream来分割字符串.可以直接把`-1/2`分成`int:-1, char:/, int:2`，也就是分子分母都出来了
2. 每个分式运算时，都是不可约简的，则可以直接算出结果，然后共同除以分子分母的最大公约数即可

[solution](source/592.FractionAdditionandSubtraction.cpp)

## 2019/7/31
* [746. Min Cost Climbing Stairs](https://leetcode.com/problems/min-cost-climbing-stairs/)

**思路**
动态规划

递推公式为：
`val[i] = min(val[i-1] + cost[i-1], val[i-2] + cost[i-2])`

注意初始值val[0], val[1]都为0


[solution](source/746MinCostClimbingStairs.java)

## 2019/8/1

* [638. Shopping Offers](https://leetcode.com/problems/shopping-offers/)


**思路**

DFS

记得递归调用返回时恢复修改的内容，使得回到上层时内容保持不变


[solution](source/638ShoppingOffers.java)


## 2019/8/1
* [690. Employee Importance](https://leetcode.com/problems/employee-importance/)

**思路**

- 此题比较简单，先从employees这个List遍历查找到需要的id，然后加上自身的importance,
再从subordinates中遍历，对该list中的值递归调用本函数即可。

- 思路2：先对employees这个List建立id到employee的Hash映射表，这样更方便查找。



- 思路3：将id加入Queue中，然后循环，直到该queue为空为止。

``` java

class Solution {
    public int getImportance(List<Employee> employees, int id) {
        Map<Integer, Employee> map = employees.stream()
            .collect(Collectors.toMap(e -> e.id, e -> e));
        Queue<Integer> ids = new LinkedList<>();
        ids.add(id);
        int result = 0;
        while (!ids.isEmpty()) {
            id = ids.remove();
            Employee e = map.get(id);
            result += e.importance;
            e.subordinates.stream().forEach(s -> ids.add(s));
        }
        return result;
    }
}

```

## 2019/8/2

* [721. Accounts Merge](https://leetcode.com/problems/accounts-merge/)

**思路**
- 并查集
- DFS

[solution](source/DFS/721AccountsMerge.java)


## 2019/8/3
* [752. Open the Lock](https://leetcode.com/problems/open-the-lock/)

**思路**
- BFS

[solution](source/BFS/752OpenTheLock.cpp)


## 2019/8/4
* [733. Flood Fill](https://leetcode.com/problems/flood-fill/)

**思路**

- DFS

[Solution](source/DFS/733FloodFill.java)


## 2019/8/5

* [932. Beautiful Array](https://leetcode.com/problems/beautiful-array/)


**思路**

**Devide and Conquer**

- devide之后如何merge


[solution](source/devide-and-conquer/932.BeautifulArray.md)


## 2019/8/6

* [973. K Closest Points to Origin](https://leetcode.com/problems/k-closest-points-to-origin/)

**有效队列**

- 掌握如何使用最大堆和最小堆
- C++默认最大堆，java默认最小堆
- compare比较器的使用方法，严格验证弱序排列

[soluton](source/devide-and-conquer/973KClosestPointstoOrigin.md)


## 2019/8/7

*[903. Valid Permutations for DI Sequence](https://leetcode.com/problems/valid-permutations-for-di-sequence/)
**思路**
- **Hard**
- 动态规划
- so diffcult...

[solution](source/devide-and-conquer/903.ValidPermutationsforDISequence.md)


## 2019/8/7

*[725. Split Linked List in Parts](https://leetcode.com/problems/split-linked-list-in-parts/)

**思路**
- 复习操作链表的方法

[solution](source/LinkedList/725.SplitLinkedListinParts.md)

## 2019/8/5
*[430. Flatten a Multilevel Doubly Linked List](https://leetcode.com/problems/flatten-a-multilevel-doubly-linked-list/)

**思路**
- 递归调用
- Stack

[solution](source/LinkedList/430.FlattenaMultilevelDoublyLinkedList.md)


