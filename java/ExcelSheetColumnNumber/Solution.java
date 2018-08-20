package org.leetcode.ExcelSheetColumnNumber;

public class Solution {
	public int titleToNumber(String s) {
		if (s == null && "".equals(s))
			return 0;
		int sum = 0;
		int j=0;
		for (int i = s.length() - 1; i >= 0; --i) {
			char ch = s.charAt(i);
			int now = ch - 'A' + 1;
			sum += j * 26 * now + now;
			++j;
		}
		return sum;
	}

	public static void main(String[] args) {
		Solution solution = new Solution();
		System.out.println(solution.titleToNumber("CB"));
	}
}