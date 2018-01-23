
## 思路
这道题是送分题，可以直接使用一元二次数学公式或者直接`while`循环。


``` C++
class Solution {
public:
    int arrangeCoins(int n) {
        int res=0;        
        while(n>=0){
            res++;
            n -=res;
        }
        return --res;
    }
    //or quadratic equation, the formula to get the sum of arithmetic progression is x = (-1+sqrt(8*n+1))/2

    return floor(-0.5+sqrt((double)2*n+0.25));

};

```
