#include<iostream>
using namespace std;
int main(){
    int a[5] = {23,43,2,32,10};
    int n = 5;
    
    for(int i = 0; i < n-1 ;i ++ ){
        for(int j = 0;j < n-i-1;j++){
            if(a[j] > a[j+1]){
                int swap = a[j];
                a[j] = a[j+1];
                a[j+1] = swap;
            }

        }
        
    }

    for(int i = 0; i < n;i++){
        cout<<a[i]<<" ";
    }
    
   
}