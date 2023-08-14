#include<iostream>
using namespace std;

class Box {
    int width;
    //ctor made private
    Box (int _w):width(_w){};

    public:
      

    int getwidth()const{
        return width;
    }

    void setwidth(int _val){
        width=_val;
    }

    friend class BoxFactory;
};

class BoxFactory{
     int count;

     public:
       Box getABox(int _w)
       {
        ++count;
        return Box(_w);
       }
};

int main(){
   //  Box a(5);   not accessible by main class

   BoxFactory bfact;
   Box b=bfact.getABox(5);
    cout<<b.getwidth()<<endl;
    return 0;
}