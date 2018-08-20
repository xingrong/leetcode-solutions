class Solution {
public:
    vector<int> plusOne(vector<int> &digits) {
        int size = digits.size();
        int carry = 1;
        for(int i=size-1; i>=0; --i) {
        	if(carry == 1) {
        		digits[i] += carry;
        		if(digits[i] >= 10) {
        			digits[i] -= 10;
        			carry = 1;
        		}else {
        			carry = 0;
        			break;
        		}
        	}
        }
        if(carry == 1) {
        	vector<int>::iterator iter = digits.begin(); 
            digits.insert(iter, 1);
        }
        return digits;
    }
};