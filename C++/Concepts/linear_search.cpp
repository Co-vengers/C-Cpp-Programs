#include<iostream>
using namespace std;
int main(){
    int elements[] = {50,30,40,60,70,10,20,90,100,80}, i, array_size, searched_element;
    bool flag = false;
    cout<<"Enter a number to search"<<endl;
    cin>>searched_element;
    array_size = sizeof(elements)/sizeof(elements[0]);
    for(i=0;i<array_size;i++){
        if(searched_element == elements[i]){
            flag = true;
            break;
        }
    }
    if(flag){
        cout<<"Element found at"<<" "<<i<<" "<<"index"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
    return 0;
}

