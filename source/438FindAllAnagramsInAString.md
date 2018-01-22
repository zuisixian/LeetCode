
遍历，使用辅助函数来判断是否是anagrams
``` C++
class Solution {
public:
	vector<int> findAnagrams(string s, string p) {
		vector<int> res;
		if (s.empty() || p.empty() || s.size() < p.size())
			return res;
		int m = s.size(), n = p.size();
		for (int i = 0; i < m - n + 1; i++) {
			//string cur = s.substr(i, i + n); java中子串就是用首位坐标表示，和C++中不同，尼玛
            //C++中ssubstr第二个参数是表示子串大小，string substr (size_t pos = 0, size_t len = npos) const;不是末尾坐标
            string cur = s.substr(i, n);
			if (helper(cur, p))
				res.push_back(i);
		}
		return res;

	}

private:
	bool helper(string a, string b) {
		if (a.empty() || b.empty() || a.size() != b.size())
			return false;
		vector<int> dict(26, 0);
		for (int i = 0; i < a.size(); i++) {
			char ch = a[i];
			dict[ch - 'a']++;
		}
		for (int i = 0; i < b.size(); i++) {
			char ch = b[i];
			dict[ch - 'a']--;
			if (dict[ch - 'a'] < 0)
				return false;
		}
		return true;
	}

};
```
