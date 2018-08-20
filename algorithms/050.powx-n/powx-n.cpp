class Solution {
public:
	double pow(double x, int n) {
        if (n == 0 || x == 1) return 1;
        if (x == 0) return 0;
        if (n < 0) x = 1/x;
        int a = abs(n);
        if (a == 1) return x;
        double t = pow(x, a/2);
        if (a%2 == 1)
            return x*t*t;
        return t*t;
    }
};