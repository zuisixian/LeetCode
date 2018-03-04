class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        maxDepth(root);
        return res;
    }

private:
    int res =0;
    int maxDepth(TreeNode* root){
        if(!root)
            return 0;
        int left = maxDepth(root->left);
        int right = maxDepth(root->right);
        res = max(res, left+right);//最大路径

        return max(left, right) +1;//当前节点该返回的值，也就是当前节点作为子节点时返回的值。
    }
};
