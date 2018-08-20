class Solution {
public:
    int atoi(const char *str) {
        if(str == NULL) return 0;
        int pos = 0;
        while(str[pos] != '\0' && str[pos] == ' ') ++pos;
        if(str[pos] == '\0') return 0;
        bool neg = false;
        if(str[pos] != '+' && str[pos] != '-' && !(str[pos] >= '0' && str[pos] <= '9')) return 0;
        if(str[pos] == '-') neg = true;
        if(str[pos] == '+' || str[pos] == '-') ++pos;
        int res = 0;
        while(str[pos] != '\0') {
        	if(str[pos] >= '0' && str[pos] <= '9') {
        		if(!neg) {
        			if(res > (INT_MAX - (str[pos]-'0')) /10) return INT_MAX;
        			res = res*10 + (str[pos]-'0');
        		}else {
        			if(-res < (INT_MIN + (str[pos]-'0'))/10) return INT_MIN;
        			res = res*10 + (str[pos]-'0');
        		}
        		
        	}else {
        	    break;
        	}
        	++pos;
        }
        return neg?-res:res;
    }
};