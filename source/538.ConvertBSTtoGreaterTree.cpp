class Solution1 {
public:
    TreeNode* convertBST(TreeNode* root) {
        travel(root);
        return root;

    }
    void travel(TreeNode* root){
        if(!root)
            return;
        if(root->right)
            travel(root->right);
        root->val = (cur_sum+=root->val);
        if(root->left)
            travel(root->left);
    }
private:
    int cur_sum = 0;

};

// without help function

class Solution {
private:
    int sum = 0;
public:

    TreeNode* convertBST(TreeNode* root) {
        if(root){
            convertBST(root->right);
            root->val +=sum;
            sum =root->val;
            convertBST(root->left);
        }
        return root;

    }

};
