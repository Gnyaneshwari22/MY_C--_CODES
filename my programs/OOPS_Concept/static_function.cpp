#include <iostream>
using namespace std;

class abc{

    public:
     int x,y;
    
     abc():x(0),y(0){}
     static void print(){          //this is static member function//////
        cout<<"this is static function "<<endl;
    }
};

int main(){
 
    abc::print();
    abc obj1;
    obj1.print();
  
    return 0;
}