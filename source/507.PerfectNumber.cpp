class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num<=1){
            return false;
        }
        int sum =1;//every num must add 1, and start from 2..
        for(int i =2;i<=sqrt(num);i++){
            if(num % i == 0){
                sum+=i;
                if(i != num/i)
                    sum +=num/i;
            }
        }
        return sum == num;
       //solution 2 shua liumang
       //static unordered_set<int> n = {6, 28, 496, 8128, 33550336};
       // return n.count(num);

    }
};
