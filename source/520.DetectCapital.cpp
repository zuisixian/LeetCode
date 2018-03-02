class Solution {
public:
    bool detectCapitalUse(string word) {
        int cnt =0;
        for(auto c:word)
            if(isupper(c)) cnt++;
        //return((cnt == 0 || cnt ==word.length()) || (cnt ==1 && 'Z'-word.at(0)>=0));
        return regex_match(word, regex("[A-Z]+|[a-z]+|[A-Z][a-z]*"));
    }
};
