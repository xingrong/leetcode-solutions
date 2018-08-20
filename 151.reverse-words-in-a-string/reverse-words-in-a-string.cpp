class Solution {
public:
	void reverseOneWord(string &s, int start, int end) {
		while(start < end) {
			char tmp = s[start];
			s[start] = s[end];
			s[end] = tmp;
			++start;
			--end;
		}
	}
	
    void reverseWords(string &s) {
    	int size = s.size();
        int start = 0;
        while(start < size && s[start] == ' ') ++start;
        string res = "";
        while(start < size) {
        	if(s[start] == ' ') {
        		++start;
        		while(start < size && s[start] == ' ') ++start;
        		if(start == size) {
        		}else {
        			res += s[start-1];
        			res += s[start];
        			++start;
        		}
        	}else {
        		res += s[start];
        		++start;
        	}
        }
        int end = 0;
        start = 0;
        size = res.size();
        while(end <= size) {
        	if(res[end] != ' ') {
        		if(end == size) reverseOneWord(res, start, end-1);
        		++end;
        	}else {
        		reverseOneWord(res, start, end-1);
        		++end;
        		start = end;
        	}
        }
        reverseOneWord(res, 0, size-1);
        s = res;
    }
};