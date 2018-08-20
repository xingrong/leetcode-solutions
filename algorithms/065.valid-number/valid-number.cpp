class Solution {
public:
    bool isNumber(const char *s) {
        bool res = false;
        if(s == NULL) return false;
        while(*s == ' ') ++s;
        if(*s == '\0') return false;
        if(*s == '+' || *s == '-') ++s;
        const char *head = s;
        bool hasE = false;
        bool hasP = false;
        while(*s != '\0') {
        	if(*s == '.') {
        		if(hasP || hasE) return false;
        		if(s == head && !(*(s+1)>='0' && *(s+1)<='9')) return false;
        		++s;
        		hasP = true;
        		continue;
        	}
        	if(*s == 'e') {
        		if(hasE || s == head) return false;
        		++s;
        		if(*s == '+' || *s == '-') ++s;
        		if(!(*s>='0' && *s<='9')) return false;
        		hasE = true;
        		continue;
        	}
        	if(*s == ' ') {
        		while(*s != '\0') {
        			if(*s == ' ') {
        				++s;
        			}else {
        				return false;
        			}
        		}
        		return true;
        	}
        	if(*s>='0' && *s<='9') {
        		++s;
        		continue;
        	}else {
        		return false;
        	}
        }
        return true;
    }
};