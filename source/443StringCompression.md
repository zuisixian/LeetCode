# 443. String Compression

题目的要是是将`vector<char>`进行压缩，里面每个字符都是连续存在的，不存在{`a`,`b`,`a`,`b`}这种分开的情形。
所以需要判断何时当前字符和下一个字符不同，那么这就是分界点。当前字符就统计完成，然后使用in place方法对原`vector<char>`
进行覆盖。


代码如下：

```C++
class Solution {
public:
	int compress(vector<char>& chars) {
		int cnt = 0, m = chars.size();
		int res = 0;

		for (int i = 0; i < m; i++) {

			cnt++;
			if ((i < m - 1 && (chars[i] != chars[i + 1])) || i == m - 1) { //when i at end of the vector
				chars[res++] = chars[i];
				if (cnt != 1) {
					string tmp = to_string(cnt);
					for (int j = 0; j < tmp.size(); j++) {
						chars[res++] = tmp[j];  // in place override
					}
				}
				cnt = 0;

			}

		}
		/*
		for (int i = 0; i < res; i++) { //display to see the content of compressed vector
			cout << chars[i] << endl;
		}
		*/
		return res;
	}
};
```
