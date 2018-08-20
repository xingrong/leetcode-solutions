class Solution {
public:
    int getVal(char c) {
    	switch(c) {
    		case 'I':
    		return 1;
    		case 'V':
    		return 5;
    		case 'X':
    		return 10;
    		case 'L':
    		return 50;
    		case 'C':
    		return 100;
    		case 'D':
    		return 500;
    		case 'M':
    		return 1000;
    	}
    }
    int romanToInt(string s) {
    	int size = s.size();
    	if(size == 0) return 0;
    	int left = getVal(s[0]);
    	int now;
    	int res = left;
        for(int i=1; i<size; ++i) {
        	now = getVal(s[i]);
        	if(now <= left) {
        		res += now;
        		left = now;
        	}else {
        		res = res - left + (now-left);
        	}
        }
        return res;
    }
};