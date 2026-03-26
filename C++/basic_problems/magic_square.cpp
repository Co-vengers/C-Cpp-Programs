#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter an odd number n for n x n matrix where n > 1: "<<endl;
    cin>>n;

    if(n % 2 == 0){
        cout<<"Cannot proceed"<<endl;
    }
    else{
        vector<vector<int>> mat(n, vector<int>(n, 0));
        int new_row, new_col;
        int i = 0, j = n / 2;
        for(int count = 1 ; count <= n * n ; count++){
            mat[i][j] = count;
            
            new_row = (i - 1 + n) % n;
            new_col = (j + 1) % n;
            
            if(mat[new_row][new_col] == 0){
                i = new_row;
                j = new_col;
            }
            else{
                i = (i + 1) % n;
            }
        }
        
        for(int it = 0 ; it < n ; it++){
            for(int it2 = 0 ; it2 < n ; it2++){
                cout<<mat[it][it2]<<"\t";
            }
            cout<<"\n";
        }
    }
    return 0;
}