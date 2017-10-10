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
    vector<vector<int> > levelOrder(TreeNode *root) {
    	vector<vector<int> > res;
    	if(root == NULL) return res;
        queue<TreeNode *> q;
        q.push(root);
        while(!q.empty()) {
        	int size = q.size();
        	vector<int> v;
        	while(size > 0) {
        		TreeNode *tmp = q.front();
        		q.pop();
        		v.push_back(tmp->val);
        		--size;
        		if(tmp->left != NULL) q.push(tmp->left);
        		if(tmp->right != NULL) q.push(tmp->right);
        	}
        	res.push_back(v);
        }
        return res;
    }
};
