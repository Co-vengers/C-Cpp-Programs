#include <iostream>
using namespace std;

int main(){
    int t;
    cout<<"Enter np. of test cases"<<endl;
    cin>>t;
    while(t--){
        int rows, cols;
        cout<<"Enter no. of rows and cols"<<endl;
        cin>>rows>>cols;
        int rows_count = 0, cols_count = 0;

        for(int i=1;i<=rows;i++){
            if(i % 2 == 0){
                continue;
            }
            rows_count++;
        }

        for(int i=1;i<=cols;i++){
            if(i % 2 == 0){
                continue;
            }
            cols_count++;
        }


        cout<<"No. of allowed rows = "<<rows_count<<endl;
        cout<<"No. of allowed cols = "<<cols_count<<endl;

        cout<<"Total no. of seats allowed = "<<rows_count * cols_count<<endl;
    }
    return 0;

}

//1- - -
//2
//3- - -
//4
//5- - -
//6
//7- - -


//no. of rows = 7   allowed seats = 4
//no. of rows = 8   allowed seats = 4
//no. of rows = 9   allowed seats = 5