//Solution1

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        //Firstly, we put each element x in nums[x - 1]. Since x ranges from 1 to N, then x - 1 ranges from 0 to N - 1, it won't exceed the           //bound of the array.
        //Secondly, we check through the array. If a number x doesn't present in nums[x - 1], then x is absent.

class Solution {
        vector<int> res;
        for(int i =0;i<nums.size();){
            if(nums[i] !=nums[nums[i]-1])   swap(nums[i], nums[nums[i]-1]);
            else i++;
        }
        for(int i =0;i<nums.size();i++){
            if(nums[i] != i+1) res.push_back(nums[i]);
        }

        return res;
    }
};

//solution 2
class Solution2 {
public:
    //when find a number i, filp the number at the position i-1 to negative.
    //if the number at position i-1 is already negative, i is the number that occurs twive.
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res;
        for(int i =0;i<nums.size();i++){
            int index = abs(nums[i])-1;
            if(nums[index] < 0)
                res.push_back(abs(index+1));
            nums[index] = -nums[index];
        }
        return res;
    }
};
