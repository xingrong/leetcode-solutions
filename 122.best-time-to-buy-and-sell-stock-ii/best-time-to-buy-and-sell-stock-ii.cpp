class Solution {
public:
    int maxProfit(vector<int> &prices) {
    	if(prices.size() == 0) return 0;
    	int res = 0;
    	int max = prices.front();
        for(vector<int>::iterator it = prices.begin(); it != prices.end(); ++it) {
        	if(*it > max) {
        		res += *it - max;
        	}
        	max = *it;
        }
        return res;
    }
};