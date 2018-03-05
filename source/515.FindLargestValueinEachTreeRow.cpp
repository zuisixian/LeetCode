/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

//do by my self ，利用dfs，分别记录每层时的值。x
class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        vector<int> res;
        dfs(root,0);
        for(const auto& item:cnt){
            res.push_back(item.second);
        }
        return res;

    }

    void dfs(TreeNode* root, int level){
        if(!root)
            return;
        if(root){
            if(cnt.find(level)== cnt.end()){
                cnt[level] = root->val;
            }
            else{
                if(cnt[level]<root->val)
                    cnt[level] = root->val;
            }
        }
        dfs(root->left,level+1);
        dfs(root->right,level+1);

    }
    private:
    map<int,int> cnt;

};

//pthon
def findValueMostElement(self, root):
    maxes = []
    row = [root]
    while any(row):
        maxes.append(max(node.val for node in row))
        row = [kid for node in row for kid in (node.left, node.right) if kid]//brilliant
    return maxes
