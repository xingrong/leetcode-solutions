package org.leetcode.SameTree;

import org.leetcode.Model.TreeNode;

public class Solution {
	boolean isSameTree(TreeNode p, TreeNode q) {
		if (p == null && q == null)
			return true;
		if (p == null && q != null)
			return false;
		if (p != null && q == null)
			return false;
		if (p.val == q.val) {
			return true && isSameTree(p.left, q.left)
					&& isSameTree(p.right, q.right);
		} else {
			return false;
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
		root.right.right.right = new TreeNode(1);

		TreeNode root1 = new TreeNode(5);
		root1.left = new TreeNode(4);
		root1.right = new TreeNode(8);
		root1.left.left = new TreeNode(11);
		root1.right.left = new TreeNode(13);
		root1.right.right = new TreeNode(4);
		root1.left.left.left = new TreeNode(7);
		root1.left.left.right = new TreeNode(2);
		root1.right.right.right = new TreeNode(1);

		Solution solution = new Solution();
		System.out.println(solution.isSameTree(root, root1));
	}
}