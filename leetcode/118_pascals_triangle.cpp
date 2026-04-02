#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
public:
	vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;
        for(int i=0; i<numRows; i++){
            vector<int> row(i+1,1);
            for(int j=1; j<i; j++){
                row[j] = triangle[i-1][j-1] + triangle[i-1][j];
            }
            triangle.push_back(row);
        }
        return triangle;
    }
};

int main(){
	Solution s1;
	vector<vector<int>> res = s1.generate(6);
	for(int i = 0 ; res.size() ; i++){
		for(auto val : res[i]){
			cout<<val<<"\t";
		}
		cout<<endl;
	}

	return 0;
}