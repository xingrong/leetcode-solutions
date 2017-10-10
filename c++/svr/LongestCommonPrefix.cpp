class Solution {
public:
    string longestCommonPrefix(vector<string> &strs) {
    	if(strs.size() == 0) return "";
        string res = "";
        int pos = 0;
        bool flag = true;
        while(flag) {
        	for(int i=0; i<strs.size(); ++i) {
        		if(pos >= strs[i].size()) {
        			flag = false;
        			break;
        		}
        		if(strs[i][pos] == strs[0][pos]) {
        			continue;
        		}else {
        			flag = false;
        			break;
        		}
        	}
        	if(flag) {
        		res += strs[0][pos];
        		++pos;
        	}
        }
        return res;
    }
};
