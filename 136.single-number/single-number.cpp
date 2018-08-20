#include <assert.h>
using namespace std;

class Solution {
public:
    int singleNumber(int A[], int n) {
    	assert(A!=NULL && n>0);
        int res = A[0];
        for(int i=1; i<n; i++) {
        	res ^= A[i];
        }
        return res;
    }
};