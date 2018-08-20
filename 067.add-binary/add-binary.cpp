class Solution {
public:
    string addBinary(string a, string b) {
    	string res = "";
    	int na = a.size();
    	int nb = b.size();
    	if(na > nb) {
    		for(int i=nb; i<na; ++i) {
    			b = "0" + b;
    		}
    		nb = na;
    	}
    	if(nb > na) {
    		for(int i=na; i<nb; ++i) {
    			a = "0" + a;
    		}
    		na = nb;
    	}
    	char carry = '0';
    	while(na>0) {
    		--na;
    		--nb;
    		if(a[na]=='0' && b[nb]=='0' && carry=='0') {
    			res = "0" + res;
    			continue;
    		}
    		if(a[na]=='1' && b[nb]=='0' && carry=='0' || 
    		   a[na]=='0' && b[nb]=='1' && carry=='0' || 
    		   a[na]=='0' && b[nb]=='0' && carry=='1') {
    		   	res = "1" + res;
    		   	carry = '0';
    		   	continue;
    		}
    		if(a[na]=='1' && b[nb]=='1' && carry=='0' || 
    		   a[na]=='0' && b[nb]=='1' && carry=='1' || 
    		   a[na]=='1' && b[nb]=='0' && carry=='1') {
    		   	res = "0" + res;
    		   	carry = '1';
    		   	continue;
    		}
    		if(a[na]=='1' && b[nb]=='1' && carry=='1') {
    			res = "1" + res;
    			carry = '1';
    			continue;
    		}
    	}
    	if(carry == '0') {
    		return res;
    	}else {
    		return "1" + res;
    	}
    }
};