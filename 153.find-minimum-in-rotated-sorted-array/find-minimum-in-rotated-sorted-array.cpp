class Solution {
public:
    int findMin(vector<int> &num) {
        int res = 0;
        int size = num.size();
        if(size == 0) return res;
        if(size == 1) return num[0];
        int start = 0;
        int end = size - 1;
        while(start < end) {
        	int mid = start + (end+1-start)/2;
        	if(num[start] > num[mid] && mid == end) return num[end];
        	if(num[start] < num[mid] && mid == end) return num[start];
        	if(num[start] < num[mid] && num[mid] > num[end]) {
        		start = mid;
        		continue;
        	}
        	if(num[start] > num[mid] && num[mid] < num[end]) {
        		end = mid;
        		continue;
        	}
        	if(num[start] < num[mid] && num[mid] < num[end]) {
        		end = mid;
        		continue;
        	}
        }
    }
};