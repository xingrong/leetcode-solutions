#include <math.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
    	if(x < 0) return false;
        int n = 0;
        int tmp = x;
        while(tmp != 0) {
        	tmp /= 10;
        	++n;
        }
        bool res = true;
        for(int i=0; i<n; i+=2) {
        	int front = x / pow(10,n-i-1);
        	int end = x % 10;
        	if(front != end) return false;
        	x = (x-front*pow(10,n-i-1))/10;
        }
        return res;
    }
};