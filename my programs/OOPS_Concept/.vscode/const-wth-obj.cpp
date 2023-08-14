#include<iostream>
using namespace std;

class abc{
     int x;  //mutable can be used toi modify the const value 
    int *y;
    int z;

    public:
     abc()
     {
        x=0;
        y=new int(0);

     }
    //   abc(int _x, int _y)
    //  {
    //      x=_x;
    //      *y=_y;

    //  }
     abc(int _x, int _y,int _z=0)  //default argument ////////can also be initialised as

     //abc(int _x,int _y,int_z):x(_x),y(new int(_y),z(_z){}) ------>> INITIALIZATION LIST                     
     {
         x=_x;
         y=new int (_y);
         z=_z;

     }

     int getX() const
     {
       //   x=20; // cannot modify the value
        return x;
     }

      int getZ () const 
     {
       // z=20;  cannot modify the value
        return z;
     }

     void setX(int _val){
           x=_val;
     }

      int getY() const
      {
        // int a=10;
       // y=&a ; cannot change
        return *y;
     }

     void setY(int _val){
        *y=_val;
     }
};

void printABC(const abc &a)
{
    cout<< a.getX() << " "<<a.getY()<<" " <<a.getZ()<<endl;
}

int main(){
    abc a(1,2,78);
    // cout<<a.getX()<<endl;
    // cout<<a.getY()<<endl;
    printABC(a);


}
 