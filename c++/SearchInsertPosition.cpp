class Solution {
public:
    int searchInsert(int A[], int n, int target) {
        int start = 0;
        int end = n-1;
        int mid;
        while(start <= end) {
        	mid = start + (end-start)/2;
        	if(A[mid] == target) return mid;
        	if(A[mid] < target) {
        		start = mid + 1;
        	}
        	if(A[mid] > target) {
        		end = mid - 1;
        	}
        }
        return start;
    }
};
