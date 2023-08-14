#include<iostream>
using namespace std;

// class cal{
//    public:

//     int a;
//     int b;
//     int c;
     //function overloading

    int add(int x,int y){
        return x+y;
    }
     int add(int x,int y,int z){
        return x+y+z;
    }
     int add(int x,int y,int z,int r){
        return x+y+z+r;
    }

//};

int main(){

    int a=12,b=3,c=6,d=8;

    int res=add(a,b,c,d);
    cout<<res;
}
