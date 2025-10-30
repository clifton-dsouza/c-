#include<iostream>
using namespace std;

int main(){
    int array[5] = {1,2,3,4,5};
    int n = 5;
     
    for(int i=0; i<n/2;i++){
        swap(array[i],array[n-i-1]);
       
    }

    for(int i=0; i<n;i++){
        cout<<array[i]<<" ";  
    }
     

}