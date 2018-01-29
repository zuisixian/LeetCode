## method1
使用hash表来记录遍历的节点，插入新节点是检查hash表中是否有`k-node->val`。
``` C++
class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        unordered_set<int> myset;
        return dfs(root, myset, k);
    }
    bool dfs(TreeNode* root, unordered_set<int>& set, int k){
        if(!root)
            return false;
        if(set.count(k-root->val))
            return true;
        set.insert(root->val);
        return dfs(root->left, set, k)||dfs(root->right, set, k);
    }
};
```
## method2
使用inorder得到数组然后首位遍历相加是否为k。
``` C++
bool findTarget(TreeNode* root, int k) {
    vector<int> nums;
    inorder(root, nums);
    for(int i = 0, j = nums.size()-1; i<j;){
        if(nums[i] + nums[j] == k)return true;
        (nums[i] + nums[j] < k)? i++ : j--;
    }
    return false;
}

void inorder(TreeNode* root, vector<int>& nums){
    if(root == NULL)return;
    inorder(root->left, nums);
    nums.push_back(root->val);
    inorder(root->right, nums);
}
```

## method
使用二分搜索，检查 `k - node.val`是否在BST中存在。
``` C++
bool findTarget(TreeNode* root, int k) {
    return dfs(root, root,  k);
}

bool dfs(TreeNode* root,  TreeNode* cur, int k){
    if(cur == NULL)return false;
    return search(root, cur, k - cur->val) || dfs(root, cur->left, k) || dfs(root, cur->right, k);
}

bool search(TreeNode* root, TreeNode *cur, int value){
    if(root == NULL)return false;
    return (root->val == value) && (root != cur)
        || (root->val < value) && search(root->right, cur, value)
            || (root->val > value) && search(root->left, cur, value);
}
```

[参考](https://leetcode.com/problems/two-sum-iv-input-is-a-bst/discuss/106059/)
