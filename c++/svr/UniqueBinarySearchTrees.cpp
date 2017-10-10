class Solution {
public:
    int numTrees(int n) {
        if(n == 0) return 1;
        int res = 0;
        for(int i=0; i<n; ++i) {
        	res += numTrees(i) * numTrees(n-i-1);
        }
        return res;
    }
};
