class Solution {
public:
    vector<vector<int> > generate(int numRows) {
    	vector<vector<int> > res;
        for(int i=0; i<numRows; ++i) {
        	vector<int> row;
        	row.push_back(1);
        	if(i == 0) {
        		res.push_back(row);
        		continue;
        	}
        	for(int j=0; j<i-1; ++j) {
        		row.push_back(res[i-1][j] + res[i-1][j+1]);
        	}
        	row.push_back(1);
        	res.push_back(row);
        }
        return res;
    }
};
