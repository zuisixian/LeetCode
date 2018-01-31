##tips:

使用`pre-order`遍历`s`，并使用`isSame`函数来验证t是否是s的子串

``` C++
class Solution {
public:
    bool isSubtree(TreeNode* s, TreeNode* t) {
        if(!s)
            return false;
        if(isSame(s,t))
            return true;
        return isSubtree(s->left, t)|| isSubtree(s->right,t);
    }

    private:
    bool isSame(TreeNode* s, TreeNode* t){
        if(!s|| !t)
            return s==t;
        if(s->val != t->val)
            return false;
        return isSame(s->left, t->left) && isSame(s->right, t->right);
    }
};


```
