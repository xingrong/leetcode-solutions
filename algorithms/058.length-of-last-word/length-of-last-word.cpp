class Solution {
public:
    int lengthOfLastWord(const char *s) {
        int res = 0;
        int now = 0;
        while(*s != '\0') {
        	if(*s == ' ') {
        		if(now != 0) {
        			res = now;
        		}
        		now = 0;
        		++s;
        		continue;
        	}
        	++now;
        	++s;
        }
        if(now == 0) {
        	return res;
        }else {
        	return now;
        }
    }
};