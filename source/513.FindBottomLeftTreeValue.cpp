/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution1 {
public:
    int findBottomLeftValue(TreeNode* root) {
        
        //队列，最右边的先进，宽度优先搜索，则队列里最后留下的就是最深最左边的值。
        queue<TreeNode*> q;
        q.push(root);
        TreeNode* curr;
        while(!q.empty()){
            curr = q.front();
            q.pop();
            if(curr->right != NULL) q.push(curr->right);
            if(curr->left != NULL) q.push(curr->left);
        }
        return curr->val;
//}
        
    }
};



class Solution {
public:
    int ans=0, h = 0;
    int findBottomLeftValue(TreeNode* root) {
        //递归，深度优先所有，从最左边开始搜索，如果是第一次到达此depth，则保存此值，同depth其他值就忽略。       
        findRecur(root, 1);         
        return ans;
        
    }
    
    
    void findRecur(TreeNode* root, int depth){
        if(h<depth ) {
            ans = root->val;
            h = depth;
        }
        if(NULL != root->left) {
            findRecur(root->left,depth+1);
        }
        if(NULL != root->right) {
            findRecur(root->right, depth+1);
        }
        
    }
};
//No global variables, 6ms (faster):

//java version
public class Solution {
    public int findBottomLeftValue(TreeNode root) {
        return findBottomLeftValue(root, 1, new int[]{0,0});
    }
    public int findBottomLeftValue(TreeNode root, int depth, int[] res) {
        if (res[1]<depth) {res[0]=root.val;res[1]=depth;}
        if (root.left!=null) findBottomLeftValue(root.left, depth+1, res);
        if (root.right!=null) findBottomLeftValue(root.right, depth+1, res);
        return res[0];
    }
}