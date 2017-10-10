class Solution {
public:
    int longestValidParentheses(string s) {
        int res = 0;
        map<char, int> pmap;
        pmap['('] = 1;
        pmap[')'] = -1;
        int size = s.size();
        int sum = 0;
        int count = 0;
        for(int i=0; i<size; ++i) {
        	++count;
        	sum += pmap[s[i]];
        	if(sum < 0) {
        		count = 0;
        		sum = 0;
        		continue;
        	}
        	if(sum == 0) {
        		if(count > res) res = count;
        	}
        }
        sum = 0;
        count = 0;
        for(int i=size-1; i>=0; --i) {
        	++count;
        	sum += pmap[s[i]];
        	if(sum > 0) {
        		count = 0;
        		sum = 0;
        		continue;
        	}
        	if(sum == 0) {
        		if(count > res) res = count;
        	}
        }
        return res;
    }
};
