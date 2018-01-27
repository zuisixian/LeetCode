[参考](https://discuss.leetcode.com/topic/98454/c-9-lines-o-n-log-n-map-plus-stack-with-binary-search)
![pic](/pic/max_binary_tree.png)


``` C++
/*
[ref](https://leetcode.com/problems/maximum-binary-tree/discuss/106146/)
The key idea is:

We scan numbers from left to right, build the tree one node by one step;
We use a stack to keep some (not all) tree nodes and ensure a decreasing order;
For each number, we keep pop the stack until empty or a bigger number; The bigger number (if exist, it will be still in stack) is current number’s root, and the last popped number (if exist) is current number’s right child (temporarily, this relationship may change in the future); Then we push current number into the stack.

*/

class Solution {
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
       vector<TreeNode*> stk;
        for(int i =0;i<nums.size();++i){
            TreeNode* cur = new TreeNode(nums[i]);
            while(!stk.empty() && stk.back()->val<nums[i])
            {
                cur->left = stk.back();
                stk.pop_back();
            }
            if(!stk.empty())
                stk.back()->right = cur;
            stk.push_back(cur);
        }
        return stk.front();

    }
};

class Solution2 {
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        vector<TreeNode*> s{new TreeNode(nums[0])};
        for(int i = 1;i<nums.size();++i){
            TreeNode* cur = new TreeNode(nums[i]);
            auto it = upper_bound(s.rbegin(),s.rend(),cur,
                                 [](const TreeNode* a, const TreeNode* b){return a->val< b->val;});
            if(it != s.rend()) (*it)->right = cur;
            if(it != s.rbegin()) cur->left = *next(it,-1);
            s.resize(distance(it, s.rend()));
            s.push_back(cur);
        }
        return s.front();
    }
};

class Solution1 {
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        map<int, TreeNode*> q = {{nums[0], new TreeNode(nums[0])}};
        for(auto i = 1;i<nums.size();++i){
            auto it_b = q.insert({nums[i], new TreeNode(nums[i])});
            if(it_b.first !=q.begin()){
                it_b.first->second->left = next(it_b.first,-1)->second;
                q.erase(q.begin(),it_b.first);
            }
            if(next(it_b.first,1)!=q.end())
                next(it_b.first,1)->second->right = it_b.first->second;
        }
        return q.rbegin()->second;
    }
};


```
