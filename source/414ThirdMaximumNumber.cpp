//merged
class Solution {
    public:
        int thirdMax(vector<int>& nums) {
            set<int> top3;//set 是有序的，从小到大，并且不重复。
            for(auto& num:nums){
                top3.insert(num);
                if(top3.size()>3)
                    top3.erase(top3.begin());//erase的参数
            }
            
            return top3.size() ==3 ? *top3.begin():*top3.rbegin();
        }

};
