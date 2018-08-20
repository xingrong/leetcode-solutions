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
    int getLength(TreeNode *root) {
    	if(root == NULL) return 0;
        int leftLength = 1 + getLength(root->left);
    	int rightLength = 1 + getLength(root->right);
    	return leftLength > rightLength ? leftLength : rightLength;
    }
    bool isBalanced(TreeNode *root) {
        if(root == NULL) return true;
        int leftLength = getLength(root->left);
        int rightLength = getLength(root->right);
        int tmp;
        if(leftLength > rightLength) {
        	tmp = leftLength - rightLength;
        }else {
        	tmp = rightLength - leftLength;
        }
        bool res = false;
        if(tmp <= 1) res = true;
        return res&&isBalanced(root->left)&&isBalanced(root->right);
    }
};