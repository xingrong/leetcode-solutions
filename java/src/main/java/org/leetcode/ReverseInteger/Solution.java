package org.leetcode.ReverseInteger;

public class Solution {
	int reverse(int x) {
		int res = 0;
		while (x != 0) {
			res *= 10;
			int tmp = x / 10;
			res += x - tmp * 10;
			x = tmp;
		}
		return res;
	}

	public static void main(String[] args) {
		Solution solution = new Solution();
		System.out.println(solution.reverse(123));
	}
}