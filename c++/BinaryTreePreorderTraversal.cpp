/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode *root) {
        vector<int> res;
        stack<TreeNode *> s;
        while(root != NULL || !s.empty()) {
        	while(root != NULL) {
        		res.push_back(root->val);
        		s.push(root);
        		root = root->left;
        	}
        	if(!s.empty()) {
        		root = s.top();
        		s.pop();
        		root = root->right;
        	}
        }
        return res;
    }
};
