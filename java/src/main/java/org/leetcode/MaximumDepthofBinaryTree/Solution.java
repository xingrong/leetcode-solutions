package org.leetcode.MaximumDepthofBinaryTree;

import org.leetcode.Model.TreeNode;

public class Solution {
	public int maxDepth(TreeNode root) {
    	if(root == null) {
    		return 0;
    	}
        int left = maxDepth(root.left);
        int right = maxDepth(root.right);
        if(left > right) {
        	return left + 1;
        }else {
        	return right + 1;
        }
    }

	public static void main(String[] args) {
		TreeNode root = new TreeNode(5);
		root.left = new TreeNode(4);
		root.right = new TreeNode(8);
		root.left.left = new TreeNode(11);
		root.right.left = new TreeNode(13);
		root.right.right = new TreeNode(4);
		root.left.left.left = new TreeNode(7);
		root.left.left.right = new TreeNode(2);
		root.right.right.right = new TreeNode(2);
		
		Solution solution = new Solution();
		System.out.println(solution.maxDepth(root));
	}
}