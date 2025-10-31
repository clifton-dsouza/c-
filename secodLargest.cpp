#include<iostream>
using namespace std;

int main(){
    int p[5] = {23,45,12,36,90};
    int n = 5;

    //int sml = c[0];
    int lrst = p[0];
    int sec_lrst = -1;

    for(int i = 1 ;i < n;i++){
        if(p[i] > lrst){
            sec_lrst = lrst;
            lrst = p[i];
        }else if(p[i] > sec_lrst && p[i] < lrst){
            sec_lrst = p[i];
        }
       
        
    }

    cout<<"Second = "<<sec_lrst<<endl;
    cout<<"Largest ="<<lrst<<endl;
    
}