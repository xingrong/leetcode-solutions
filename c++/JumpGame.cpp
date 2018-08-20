class Solution {
public:
    bool canJump(int A[], int n) {
    	if(n == 1) return true;
        bool res = true;
        int pos = n-1;
        if(A[pos] == 0) {
            while(pos >= 0) {
        		if(A[pos--] > 0) continue;
        		int tmp = 1;
        		res = false;
        		while(pos >= 0) {
        			if(A[pos] >= tmp) {
        				res = true;
        				break;
        			}
        			--pos;
        			++tmp;
        		}
        		break;
        	}
        }
        while(pos >= 0) {
        	if(A[pos--] > 0) continue;
        	int tmp = 1;
        	res = false;
        	while(pos >= 0) {
        		if(A[pos] > tmp) {
        			res = true;
        			break;
        		}
        		--pos;
        		++tmp;
        	}
        }
        return res;
    }
};
