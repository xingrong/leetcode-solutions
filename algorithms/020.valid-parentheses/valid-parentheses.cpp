#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
    	stack<char> res;
    	res.push('#');
    	int size = s.size();
    	for(int i=0; i<size; ++i) {
    		if(res.top() == '(' && s[i] == ')' || res.top() == '[' && s[i] == ']' || res.top() == '{' && s[i] == '}') {
    			res.pop();
    		}else {
    			res.push(s[i]);
    		}
    	}
    	if(res.size() == 1) {
    		return true;
    	}else {
    		return false;
    	}
    }
};