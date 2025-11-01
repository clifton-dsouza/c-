#include<iostream>
using namespace std;
int main(){
    int a[5] = {10,20,30,40,50};  
    int n =5;

    for(int i = 0; i < n ; i++ ){
        a[i] = a[i+1];

        

    }

    for(int i =0 ; i < n ; i++){
        cout<<a[i]<<" ";
    }
}