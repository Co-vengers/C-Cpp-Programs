#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<int> num = {10, 20, 30, 40, 50};

    auto res = find(num.begin(), num.end(), 30);
    if(res != num.end()){
        cout << "Found at index: " << distance(num.begin(), res) << endl;    }
    else{
        cout<<"Element not found"<<endl;
    }

    return 0;
}