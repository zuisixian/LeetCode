/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> findMode(TreeNode* root) {
        unordered_map<int,int> map;
        vector<int> result;
        //找到出现次数最多的节点的次数。
        int modeCount = getModeCount(root, map);


        for(auto p:map){
            if(p.second == modeCount){//遍历
                result.push_back(p.first);
            }
        }
        return result;
    }
    /**
    *transverse the tree using depth first search.
    *
    */
    int getModeCount(TreeNode* root, unordered_map<int,int>& map){
        if(!root)
            return 0;
        if(map.find(root->val) == map.end()){
            //如果map没有，那就新建键值对。
            //map.insert(pair<int,int>(root->val,1));
            map[root->val]=1;
        }
        else{
            map[root->val]++;
        }

        return max(map[root->val], max(getModeCount(root->left,map), getModeCount(root->right,map)));


    }

};
