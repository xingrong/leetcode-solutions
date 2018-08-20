class Solution {
public:
    void merge(int A[], int m, int B[], int n) {
        if(n == 0) {
        	return;
        }
        if(m == 0) {
        	for(int i=0; i<n; ++i) {
        		A[i] = B[i];
        	}
        }
        int i = 1;
        int j = 1;
        int k = 1;
        while(m-i>=0 && n-j>=0) {
        	if(A[m-i] > B[n-j]) {
        		A[m+n-k] = A[m-i];
        		++i;
        		++k;
        	}else {
        		A[m+n-k] = B[n-j];
        		++j;
        		++k;
        	}
        }
        while(m-i >= 0) {
        	A[m+n-k] = A[m-i];
        	++i;
        	++k;
        }
        while(n-j >= 0) {
        	A[m+n-k] = B[n-j];
        	++j;
        	++k;
        }
    }
};