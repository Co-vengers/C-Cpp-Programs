#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    vector<string> res;
    string s = "abc";
    int n = s.size();

    for(int i = 0 ; i < 1 << n ; i++){
        string sub = "";
        for(int j = 0 ; j < n ; j++){
            if(i & (1 << j)){
                sub += s[j];
            }
        }
        res.push_back(sub);
    }

    for(auto sub : res){
        cout<<"\""<<sub<<"\""<<endl;
    }
    return 0;
}