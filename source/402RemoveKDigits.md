
直接去掉“顶峰”的数，即比右邻居大的数，就可以，如果“顶峰”数不够，那就直接裁剪str后面的值使数量
满足要求。
```
class Solution {
public:
    string removeKdigits(string num, int k) {
        //去掉peak的num就可以了，采用堆栈就一直遍历一遍，时间复杂福O(n)
        string res;
        int keep = num.size()-k;
        for(int i= 0;i<num.size();i++){
            while(res.size()>0 && res.back()>num[i] && k>0){
                res.pop_back();
                k--;
            }
            res.push_back(num[i]);

        }
        //裁剪掉末尾不够pop_back的数量，才能去掉k个数。
        res.erase(keep,string::npos);
        //trim leading zeros
        int s =0;
        while(s<res.size() && res[s]=='0') s++;
        res.erase(0,s);
        return res == ""?"0":res;

    }
};
```
