#include<iostream>
using namespace std;
int main(){
    int a[5] = {23,43,2,32,10};
    int n = 5;
    
    for(int i = 0; i < n ;i ++ ){
        if(a[i] > a[i+1]){
            cout<<a[i]<<" ";
        }else if(a[i] < a[i+1]){
            a[i+1] = a[i];
        }
    }
   
}