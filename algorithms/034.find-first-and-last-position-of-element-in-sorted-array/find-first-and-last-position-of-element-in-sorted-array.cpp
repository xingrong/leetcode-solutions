class Solution {
public:
	int binarySearch(int A[], int start, int end, int target) {
		int mid = start + (end-start)/2;
		while(start <= end) {
			if(A[mid] == target) return mid;
			if(A[mid] < target) {
				start = mid + 1;
				return binarySearch(A,start,end,target);
			}
			if(A[mid] > target) {
				end = mid - 1;
				return binarySearch(A,start,end,target);
			}
		}
		return -1;
	}
	
    vector<int> searchRange(int A[], int n, int target) {
        vector<int> res;
        int pos = binarySearch(A,0,n-1,target);
        if(pos == -1) {
        	res.push_back(-1);
        	res.push_back(-1);
        	return res;
        }
        int low = pos;
        while(low >= 0 && A[low] == A[pos]) --low;
        int high = pos;
        while(high <= n-1 && A[high] == A[pos]) ++high;
        res.push_back(low+1);
        res.push_back(high-1);
        return res;
    }
};