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
