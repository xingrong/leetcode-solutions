class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int res = 0;
        int size = prices.size();
        if(size == 0) return res;
        int min = prices[0];
        int tmp = 0;
        for(int i=0; i<size; ++i) {
        	if(prices[i] > min) {
        		tmp = prices[i] - min;
        		if(tmp > res) res = tmp;
        	}else {
        		min = prices[i];
        	}
        }
        return res;
    }
};