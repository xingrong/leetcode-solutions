class Solution {
public:
    int maxSubArray(int A[], int n) {
    	int count = 0;
    	int res = A[0];
    	for(int i=0; i<n; ++i) {
    		count += A[i];
    		if(count > res) {
    			res = count;
    		}
    		if(count < 0) {
    			count = 0;
    		}
    	}
    	return res;
    }
};