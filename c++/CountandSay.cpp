class Solution {
public:
    string getCount(string in) {
    	string res;
    	char say;
    	int count;
    	int pos = 0;
    	int size = in.size();
    	for(int i=0; i<size;) {
    		say = in[i];
    		count = 1;
    		++i;
    		while(i < size && in[i] == say) {
    			++count;
    			++i;
    		}
    		pos = i;
    		res += '0' + count;
    		res += say;
    	}
    	return res;
    }
    string countAndSay(int n) {
        if(n <= 0) return "";
        string str = "1";
        string res = str;
        for(int i=1; i<n; ++i) {
        	res = getCount(str);
        	str = res;
        }
        return res;
    }
};
