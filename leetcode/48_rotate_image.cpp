#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for (int row = 0; row < n / 2; row++) {
            swap(matrix[row], matrix[n - row - 1]);
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
};

int main() {
    Solution s1;
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    s1.rotate(matrix);
    cout << "Rotated matrix = " << endl;

    int n = matrix.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " "; // Added space for better readability
        }
        cout << endl;
    }
    return 0;
}
