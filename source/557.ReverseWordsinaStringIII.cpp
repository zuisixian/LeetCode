
class Solution {
public:
    string reverseWords(string s) {
        stringstream iss(s);
        string word, d = "";
        while(iss >> word){
            reverse(word.begin(), word.end());
            d+= word+' ';
        }
        d.pop_back();//去掉最后的' ';
        return d;
    }
};