public class Solution {
    public int maxProfit(int[] prices) {
    	if (prices.length == 0)
			return 0;
		int res = 0;
		int max = prices[0];
		for (int i = 0; i < prices.length; ++i) {
			if (prices[i] > max) {
				res += prices[i] - max;
			}
			max = prices[i];
		}
		return res;
    }
}