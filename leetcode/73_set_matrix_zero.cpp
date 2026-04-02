#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
public:
	void setZeroes(vector<vector<int>>& matrix){
		int num_rows = matrix.size();
		int num_cols = matrix[0].size();

		vector<bool> rows(num_rows);
		vector<bool> cols(num_cols);

		for(int i = 0 ; i < num_rows ; i++){
			for(int j = 0 ; j < num_cols ; j++){
				if(matrix[i][j] == 0){
					rows[i] = true;
					cols[j] = true;
				}
			}
		}

		for(int i = 0 ; i < num_rows ; i++){
			for(int j = 0 ; j < num_cols ; j++){
				if(rows[i] == true || cols[j] == true){
					matrix[i][j] = 0;
				}
			}
		}

		for(int i = 0 ; i < matrix.size() ; i++){
			for(int j = 0 ; j < matrix[0].size() ; j++){
				cout<<matrix[i][j]<<"\t";
			}
			cout<<endl;
		}
	}
};

int main(){
	vector<vector<int>> matrix = {
        {0, 1, 2, 0},
        {3, 4, 5, 2},
        {1, 3, 1, 5}
    };

	Solution s1;

	s1.setZeroes(matrix);

    return 0;
}