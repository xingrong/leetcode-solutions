/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
        if(root == NULL) return;
        queue<TreeLinkNode *> q;
        q.push(root);
        while(!q.empty()) {
        	int size = q.size();
        	while(size > 0) {
        		TreeLinkNode *tmp = q.front();
        		q.pop();
        		if(tmp->left != NULL) q.push(tmp->left);
        		if(tmp->right != NULL) q.push(tmp->right);
        		--size;
        		if(size == 0) {
        			tmp->next = NULL;
        		}else {
        			tmp->next = q.front();
        		}
        	}
        }
    }
};