#include<iostream>
using namespace std;

int main(){
    int a[5] = {10,20,30,40,50};  
    int n = 5;  

    
    int fir = a[0];
    for(int i = 0; i < n ; i++ ){
        a[i] = a[i+1];
    }
    a[n-1] = fir;


    for(int i =0 ; i < n ; i++){
       cout<<a[i]<<" ";
    }

    cout<<endl;

    int last = a[n-1];
    for(int i = n-1; i > 0;i--){
        a[i] = a[i-1];
    }
    a[0] = last;

     for(int i =0 ; i < n ; i++){
        cout<<a[i]<<" ";
    }
    
}
