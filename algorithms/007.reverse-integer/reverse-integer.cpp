class Solution {
public:
    int reverse(int x) {
        int res = 0;
        while(x != 0) {
        	res *= 10;
        	int tmp = x / 10;
        	res += x - tmp*10;
        	x = tmp;
        }
        return res;
    }
};