#include<iostream>
using namespace std;

int main(){
    int a[3][4] = {
        {1,2,3,4},
        {6,7,8,9},
        {3,6,9,12}
    };
   
    int *p[3];
    p[0] = new int[4];
    p[1] = new int[4];
    p[2] = new int[4];
    


    int **q;
    q = new int*[3];
    q[0] = new int[4];
    q[1] = new int[4];
    q[2] = new int[4];
     for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<q[i][j]<<"\t";
        }
        cout<<endl;
    }
}
