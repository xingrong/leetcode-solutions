class Solution {
public:
    int removeDuplicates(int A[], int n) {
    	int res = n;
    	int pos = 0;
        for(int i=0; i<n;) {
        	int j = i + 1;
        	while(j < n) {
        		if(A[i] == A[j]) {
        			++j;
        		}else {
        			break;
        		}
        	}
        	if(j == n) {
        		return pos + 1;
        	}
        	A[pos+1] = A[j];
        	++pos;
        	i = j;
        }
        return res;
    }
};
