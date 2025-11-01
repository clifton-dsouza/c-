#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v = {1,2,3};
    v.push_back(5);
    v.push_back(33);
    for(int i = 0; i <v.size();i++){
        cout<< v[i] <<" ";
    }
}