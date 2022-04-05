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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>> ans;
        queue<TreeNode *>q;
        
        if(root == NULL)
        return ans;
        
        q.push(root);
        
        while(q.empty() != true)
        {
            vector<int> temp;
            int n = q.size();
            
            for(int i=0 ; i<n ; i++)
            {
                TreeNode *p= q.front();
                q.pop();
                
                temp.push_back(p->val);
                
                if(p->left != NULL)
                q.push(p->left);
                
                if(p->right != NULL)
                q.push(p->right);
            }
            ans.push_back(temp);
        }
        
        return ans;
    }
};