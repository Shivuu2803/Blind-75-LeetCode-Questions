/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) 
    {
        queue<TreeNode*> q;
        vector<vector<int>> vec;
        
        if(root)
        {
            q.push(root);
        }
        
        while(!q.empty())
        {
            int level_size = q.size();
            
            vector<int> level;
            
            while(level_size-- > 0)
            {
                TreeNode* curr = q.front();
                q.pop();
                
                level.push_back(curr->val);
                
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            
            vec.push_back(level);
        }
        
        return vec;
    }
};
