#include<iostream>
using namespace std;

class animal{
    public:
     int age;
     int weight;

    virtual   void speak() {
        cout<<" speak "<<endl;
    }
};

class dog:public animal{
     public: 
    void speak() {            //function overraiding
        cout<<" barking "<<endl;
    }
};

int main(){
    
    // dog d;
    // d.speak();    //op ===>barking
  
    animal* a=new animal();
    a->speak();     //op >speaking

    dog* d=new dog();
    d->speak();   //op barking
   

   //upcasting (run tyep polymorphism)
    animal* b=new dog(); 
    b->speak();            //op without virtual key word-->speaking
                          //op with virtual key word--> barking

   //downcasting 

   dog* d2=(dog*) new animal();
   d2->speak();      //op with virtual key word--> speak
                    //op without virtual key word-->bark



}