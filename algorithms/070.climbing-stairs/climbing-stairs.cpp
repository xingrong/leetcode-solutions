class Solution {
public:
    int climbStairs(int n) {
        if(n == 1) return 1;
        if(n == 2) return 2;
        int res = 0;
        int n1 = 2;
        int n2 = 1;
        for(int i=3; i<=n; ++i) {
        	res = n1 + n2;
        	n2 = n1;
        	n1 = res;
        }
        return res;
    }
};