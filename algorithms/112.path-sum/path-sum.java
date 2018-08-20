/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
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
}