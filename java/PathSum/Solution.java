package org.leetcode.PathSum;

import org.leetcode.Model.TreeNode;

public class Solution {
	public boolean hasPathSum(TreeNode root, int sum) {
		return sumCal(root, sum, 0);
	}

	private boolean sumCal(TreeNode root, int sum, int now) {
		if (root == null)
			return false;
		if (root.left == null && root.right == null && now + root.val == sum)
			return true;
		return sumCal(root.left, sum, now + root.val)
				|| sumCal(root.right, sum, now + root.val);
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

		Solution solution = new Solution();
		System.out.println(solution.hasPathSum(root, 22));
	}
}