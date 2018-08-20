class Solution {
public:
    bool isPalindrome(string s) {
        int front = 0;
        int end = s.size();
        bool res = true;
        while(front <= end) {
        	if(s[front]>='a' && s[front]<='z' || s[front]>='A' && s[front]<='Z' || s[front]>='0' && s[front]<='9') {
        		if(s[end]>='a' && s[end]<='z' || s[end]>='A' && s[end]<='Z' || s[end]>='0' && s[end]<='9') {
        			if(s[front] == s[end] || s[front]+32 == s[end] || s[front] == s[end]+32) {
        				++front;
        				--end;
        			}else return false;
        		}
        		else {
        			--end;
        		}
        	}else {
        		++front;
        	}
        }
        return true;
    }
};