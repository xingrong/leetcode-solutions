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
    TreeNode* getSym(TreeNode *root) {
    	if(root == NULL) return root;
    	TreeNode *tmp = new TreeNode(root->val);
    	tmp->left = getSym(root->right);
    	tmp->right = getSym(root->left);
    	return tmp;
    }
    bool isSym(TreeNode *root1, TreeNode *root2) {
    	if(root1 == NULL && root2 == NULL) return true;
    	if(root1 == NULL && root2 != NULL || root1 != NULL && root2 == NULL) return false;
    	if(root1->val == root2->val) {
    		return true && isSym(root1->left, root2->left) && isSym(root1->right, root2->right);
    	}else {
    		return false;
    	}
    }
    bool isSymmetric(TreeNode *root) {
        TreeNode *tmp = getSym(root);
        return isSym(tmp, root);
    }
};
