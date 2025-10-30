#include<iostream>
using namespace std;

int main(){
    int a[5] = {1,2,3,4,5};

    int n = 5;
    int dele_pos = 3;

    for(int i = dele_pos;i<n-1;i++){
        a[i] = a[i+1];
    }
    n--;
    //a[2] = a[3];
    //a[3] = a[4];

    for(int i=0;i<n;i++){
        
        cout<< a[i] <<endl;
    }

    }

