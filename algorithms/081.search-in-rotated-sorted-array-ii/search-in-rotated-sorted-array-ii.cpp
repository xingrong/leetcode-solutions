class Solution {
public:
	int find(int A[], int start, int end, int target) {
		if(A[start] == target) return start;
		if(A[end] == target) return end;
		int mid = start + (end - start)/2;
		if(A[mid] == target) return mid;
		if(A[start] == A[mid] && A[mid] == A[end] && start != mid && mid != end) {
			int pos = find(A,start,mid,target);
			if(pos != -1) return pos;
			return find(A,mid,end,target);
		}
		if(A[start] <= A[mid] && A[mid] >= A[end] && start != mid && mid != end) {
			if(target < A[mid] && target > A[start]) {
				return find(A,start,mid,target);
			}
			if(target < A[mid] && target < A[start]) {
				return find(A,mid,end,target);
			}
			if(target > A[mid]) return find(A,mid,end,target);
		}else if(A[start] <= A[mid] && A[mid] <= A[end] && start != mid && mid != end) {
			if(target < A[mid]) {
				return find(A,start,mid,target);
			}else {
				return find(A,mid,end,target);
			}
		}else if(A[start] >= A[mid] && A[mid] <= A[end] && start != mid && mid != end) {
			if(target < A[mid]) {
				return find(A,start,mid,target);
			}
			if(target > A[mid] && target < A[end]) {
				return find(A,mid,end,target);
			}
			if(target > A[mid] && target > A[end]) {
				return find(A,start,mid,target);
			}
		}else return -1;
	}
	
    bool search(int A[], int n, int target) {
        int pos = find(A, 0, n-1, target);
        if(pos == -1) return false;
        return true;
    }
};