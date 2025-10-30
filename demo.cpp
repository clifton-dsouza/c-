#include<iostream>
#include<stdio.h>

using namespace std;

class rectangle
{
private:

    int length;
    int breadth;

public:

rectangle (){
        length  = 0;//ji nfi    
        breadth = 0;
    }

rectangle(int l,int b){
        length  = l;
        breadth = b;   
    }


int area(){
    int c = length*breadth;
    return c;
}


int peri(){
    int c;
    c = 2*(length + breadth);
    return c;
}

void setLength(int l){
    length = l;
}

void setBreadth(int b){
    breadth = b;
}

int getLength(){
    return length;
}

int getBreadth(){
    return breadth;
}

~rectangle(){
    cout<<"Destructor"<<endl;
}
};

int main(){
   rectangle r(5,10);


   cout<<"Area =  x"<<r.area()<<endl;
   cout<<"Perimeter = "<<r.peri()<<endl;


    return 0;

}
