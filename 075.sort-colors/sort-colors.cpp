class Solution {
public:
    void sortColors(int A[], int n) {
       int start = 0;
       int end = n-1;
       while(start < end) {
           while(A[start] == 0 && start < n) {
               ++start;
           }
           while(A[end] != 0 && end >= 0) {
           	   --end;
           }
           if(start < end) {
               int tmp = A[start];
               A[start] = A[end];
               A[end] = tmp;
               ++start;
               --end;
           }
       }
       if(A[start] == 0) ++start;
       int pos = start;
       end = n - 1;
       while(start < end) {
           while(A[start] == 1 && start < n) {
               ++start;
           }
           while(A[end] == 2 && end >= pos) {
           	   --end;
           }
           if(start < end) {
               int tmp = A[start];
               A[start] = A[end];
               A[end] = tmp;
               ++start;
               --end;
           }
       }
    }
};