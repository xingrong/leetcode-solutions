package org.leetcode.SingleNumber;

public class Solution {
	public int singleNumber(int[] nums) {
		int res = nums[0];
		for (int i = 1; i < nums.length; ++i) {
			res ^= nums[i];
		}
		return res;
	}

	public static void main(String[] args) {
		Solution solution = new Solution();
		int[] nums = { 1, 4, 2, 4, 3, 2, 3 };
		System.out.println(solution.singleNumber(nums));
		int[] nums1 = { 1 };
		System.out.println(solution.singleNumber(nums1));
		int[] nums2 = { 1, 3, 2, 3, 1 };
		System.out.println(solution.singleNumber(nums2));
		int[] nums3 = { 1, 3, 2, 2, 1, 3, 4 };
		System.out.println(solution.singleNumber(nums3));
	}
}