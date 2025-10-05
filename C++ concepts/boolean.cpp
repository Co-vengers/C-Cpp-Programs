#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 10, c = 10, x;
    x = a++ == b++ && b++ == ++c;
    cout<<"a = "<<a<<endl<<"b = "<<b<<endl<<"c = "<<c<<endl<<"x = "<<x<<endl;
    return 0;
}


//[40, 50, 30, 10, 20]

