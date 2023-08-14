#include<iostream>

using namespace std;


class abc{
    public:
     static int x,y;      //////static data Member/////////

     void print(){
        cout<<x << " "<< y<<endl;
     }
};

int abc::x;         //same data variable or copy is shared throught the classes////
int abc::y;        //so its same over any instance of class////

int main(){
    abc obj1,obj2;
    obj1.x=2;
    obj1.y=3;
    obj1.print();

     obj2.x=60;
    obj2.y=20;

    obj2.print();      //60,20
    obj1.print();    //60,20

}