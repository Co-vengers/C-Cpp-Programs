#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &vec1, vector<int> &vec2, int m_size, int n_size){
    int i = 0, j = 0, k = 0;
    vector<int> res;

    while(i < m_size && j < n_size){
        if(vec1[i] < vec2[j]){
            res.push_back(vec1[i++]);
            k++;
        }
        else{
            res.push_back(vec2[j++]);
            k++;
        }
    }

    for(; i < m_size; i++){
        res.push_back(vec1[i]);
        k++;
    }

    for(; j < n_size; j++){
        res.push_back(vec2[j]);
        k++;
    }

    for(int i = 0; i < res.size(); i++){
        cout<<"Element at index: "<<i<<endl;
        cout<<res[i]<<endl;
    }
}

int main(){
    vector<int> vec1 = {2, 8, 15, 18}, vec2 = {5, 9, 12, 17};
    int m_size = vec1.size(), n_size = vec2.size();
    merge(vec1, vec2, m_size, n_size);
    return 0;
}