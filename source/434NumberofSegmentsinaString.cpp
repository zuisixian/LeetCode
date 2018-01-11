//直接在str最后添加一个空格，这样方便。
//或者遍历到最后单独处理res += s[i] != ' ' && (i + 1 == s.size() || s[i + 1] == ' ');
//这个题比较简单。。
class Solution {
public:
    int countSegments(string s) {
        int res =0;
        s.push_back(' ');
        for(int i = 1;i<s.size();i++){
            if(s[i]== ' ' && s[i-1] != ' '){
                res++;
            }
        }
        return res;
    }
};
