/*
统计字符串中的每个字符中有多少个是奇数的，然后使用总长度减去奇数的个数再加1(if odd>0);
*/

class Solution {
public:
    int longestPalindrome(string s) {
        int odd = 0;

        for(char c = 'A';c<='z';c++){
            odd += count(s.begin(),s.end(), c)&1;
        }

        return s.size()-odd +(odd>0);
    }
};

//python solution
class Solution(object):
    def longestPalindrome(self, s):
        """
        :type s: str
        :rtype: int
        """
        odds = sum(n&1 for n in collections.Counter(s).values())
        return len(s)-odds +bool(odds)
