#include<iostream>
using namespace std;

class base{

    public:
     base(){       //cannot make constructor virtual
        cout<<" base cons called \n";
      }

     virtual ~base(){
        cout<<"base distr called\n";
      }
};

class derived: public base{

    public:
    int *n;
    derived()
    { 
        n=new  int[100];
        cout<<" derived cotor\n";
    }
    ~derived(){
          delete[] n;
        cout<<"drived dtor\n";
    }
};

int main(){
    base *b=new derived();
    delete b;
    return 0;
}