
//https://leetcode.com/problems/reconstruct-original-digits-from-english/discuss/91195/class Solution {
public:
    string originalDigits(string s) {
        vector<string> words = {"zero","two","four","six", "eight", "one", "three","five","seven","nine"};
        vector<int> nums = {0,2,4,6,8,1,3,5,7,9};
        vector<int> distinct_char = {'z','w','u','x','g','o','r','f','v','i'};
        //z之后再也没有数字包含z，o之后再也没有数字包含o;zero包含的o会在扫描到zero时就减掉了，剩下的o就是one的数量。
        vector<int> counts(26,0);
        string result;
        for(auto& ch:s){
            counts[ch-'a']++;// 每个字符出现的次数统计
        }
        for(int i = 0;i<10;i++){
            int count = counts[distinct_char[i]-'a'];// 统计z,w，u,x，g..出现的次数。
            for(int j = 0;j<words[i].size();j++){//以zero为例子，将e,r,o的数量减去z的数量(count)。
                counts[words[i][j]-'a'] -=count;
            }
            while(count--){
                results +=to_string(nums[i]);//i=0,代表数字0，i=1代表数字2...
            }

        }
        sort(result.begin(),results.end());
        return results;
    }
};

//https://leetcode.com/problems/reconstruct-original-digits-from-english/discuss/91232/
class Solution {
public:
    string originalDigits(string s) {
        vector<int> a(10, 0);
        vector<int> alpha(128, 0);
        for (char c : s)
            alpha[c]++;
        a[0] = alpha['z'];
        a[2] = alpha['w'];
        a[4] = alpha['u'];
        a[6] = alpha['x'];
        a[8] = alpha['g'];
        a[3] = alpha['h'] - a[8]; //只有eight 和three存在h
        a[5] = alpha['f'] - a[4];
        a[7] = alpha['v'] - a[5];
        a[1] = alpha['o'] - a[0] - a[2] - a[4];
        a[9] = alpha['i'] - a[5] - a[6] - a[8];
        string ans;
        for (int i = 0; i < 10; i++) {
            if (a[i] > 0)
                ans += string(a[i], '0' + i);
        }
        return ans;
    }
};
