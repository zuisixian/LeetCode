

//self explain
class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root)   return nullptr;

        if(root->val == key){
            if(!root->right){
                TreeNode* left = root->left;
                delete root;
                return left;
            }
            else{
                TreeNode* right = root->right;
                while(right->left)//find the min in the right child
                    right = right->left;
                swap(root->val,right->val);
            }
        }
        root->left =deleteNode(root->left, key);
        root->right = deleteNode(root->right,key);
        return root;


    }
};
