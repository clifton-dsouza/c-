#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size"<<endl;
    cin>>n;
    //vector<int>a(n);

    int a[n];

    cout<<"Enter the elements "<< endl; 
    for(int i = 0; i < n ; i++ ){
        cin>>a[i];
    }

    //enter the elements
    cout<<"The elements are"<<endl;
    for(int i = 0; i < n ; i++){
        cout<<a[i]<<" ";
    }
}