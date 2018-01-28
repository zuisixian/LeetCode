
// BST algorithm

class Solution {
public:
    TreeNode* trimBST(TreeNode* root, int L, int R) {
        if(!root)
            return nullptr;
        root->left = trimBST(root->left,L,R);
        root->right = trimBST(root->right,L,R);
        return (root->val>R)?root->left:((root->val<L)?root->right:root);
    }
};
