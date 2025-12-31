#include<iostream>

using namespace std;

class ARR{
    int A[10];
    int size;
    int length;

public:
    ARR(int arr[],int s,int l){
        
        this->size = s;
        this->length = l;
        for(int i = 0 ;i < l;i++){
            A[i] = arr[i];
        }
    }

    int Delete(int index){
        int x = A[index];
        if(index >=0 && index < length){
            for(int i = index;i < length - 1;i++){
                A[i] = A[i+1];
            }
            length--;
            return x;
        }
        return 0;
    }

    void Display() {
        for (int i = 0; i < length; i++)
            cout << A[i] << " ";
        cout << endl;
    }
};
int main(){
    int array[10]= {1,2,3,45,2};

    ARR a(array,10,5);
    a.Delete(2);

    a.Display();

 
    return 0;
   
}