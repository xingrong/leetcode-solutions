class Solution {
public:
    bool isValid(string s, int start, int size) {
    	if(size == 1) return true;
    	if(size == 2) {
    		if(s[start] == '0') {
    			return false;
    		}else {
    			return true;
    		}
    	}
    	if(size == 3) {
    		if(s[start] == '0') {
    			return false;
    		}
    		if(s[start] == '1') {
    			return true;
    		}
    		if(s[start] == '2') {
    			if(s[start+1] >= '0' && s[start+1] <= '4') {
    				return true;
    			}else if(s[start+1] == '5') {
    				if(s[start+2] >= '0' && s[start+2] <= '5') {
    					return true;
    				}else {
    					return false;
    				}
    			}else {
    				return false;
    			}
    		}
    	}
    	return false;
    }
    vector<string> restoreIpAddresses(string s) {
    	vector<string> res;
        string one;
        string two;
        string three;
        string four;
        int size = s.size();
        bool isValid1;
        bool isValid2;
        bool isValid3;
        bool isValid4;
        int start1;
        int start2;
        int start3;
        int start4;
        for(int i=1; i<=3 && i<=size-3; ++i) {
        	start1 = 0;
        	isValid1 = isValid(s,start1,i);
        	for(int j=1; j<=3 && j<=size-2-i; ++j) {
        		start2 = start1 + i;
        		isValid2 = isValid(s,start2,j);
        		for(int k=1; k<=3 && k<=size-1-i-j; ++k) {
        			start3 = start2 + j;
        			isValid3 = isValid(s,start3,k);
        			if(isValid3) {
        				start4 = start3 + k;
        				isValid4 = isValid(s,start4,size-i-j-k);
        				if(isValid1 && isValid2 && isValid3 && isValid4) {
        					string tmp = s.substr(start1,i)+"."+s.substr(start2,j)+"."+s.substr(start3,k)+"."+s.substr(start4,size-i-j-k);
        					res.push_back(tmp);
        				}
        			}
        		}
        	}
        }
        return res;
    }
};
