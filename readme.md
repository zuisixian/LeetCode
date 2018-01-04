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
