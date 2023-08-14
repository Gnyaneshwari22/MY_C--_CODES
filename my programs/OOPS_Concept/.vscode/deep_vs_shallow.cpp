#include<iostream>
using namespace std;
  

// class abc{
//     public:
//      int x;
//      int *y;

//      abc(int _x,int _y):x(_x),y(new int(_y)) {}

//      void print( ) const
//      {
//         printf("x:%d\nPTR y:%p\ncontent of y [*y]:%d\n\n",x , y, *y);
//      }
// };
// int main(){

//     abc a(1,2);
//     a.print();

//     abc b=a;
//     b.print();
//     return 0;

// }

class abc{
    public:
    int x;
    int *y;

    abc(int _x,int _y):x(_x),y(new int(_y)){}

    abc (const abc &obj){
        x=obj.x;
        y=new int (*obj.y);
    }
    void print( ) const
    {
        printf("x:%d\nPTR y:%p\ncontent of y [*y]:%d\n\n",x , y, *y);
     }
    //  ~abc(){
    //     delete y;
    //  }
};

int main(){
    abc *a=new abc(1,2);
    abc  b=*a;
    b.print();
}