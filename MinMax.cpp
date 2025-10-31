#include<iostream>
using namespace std;
int main(){
    int p[5] = {3,6,1,9,2};
    int n = 5;

    int largest = p[0];
    int smallest = p[0];

    for(int i=0;i < n;i++){
        if(p[i]<smallest){
             smallest = p[i];
        }
        
        if(p[i]>largest){
            largest = p[i];
        }
        
    }

    cout<<"Smallest = "<<smallest<<endl;
    cout<<"Largest = "<<largest<<endl;
}
