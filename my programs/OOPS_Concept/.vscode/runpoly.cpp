#include<iostream>
using namespace std;

class animal{
    public:
     int age;
     int weight;
  ///run time poymorphism in ====constructor======
      animal() {
        cout<<" speak "<<endl;
    }
};

class dog:public animal{
     public: 
     
      dog(){            
        cout<<" barking "<<endl;
    }
};
class cat:public dog{
     public: 
     
      cat(){            
        cout<<" meowing "<<endl;
    }
};



int main(){
    
    // animal* a=new animal();    //op  --->speak
    // animal* a1=new dog();  //op ---> spaeak & bark
    // dog* d=(dog*) new animal();   //op ---> speak
    // dog* d1=new dog();    // op---> speak& bark
     
    //  cat* d2=new cat();   //op ---> all constructor called
    // cat* d2= (cat*) new dog();  //op----bark & speak

    //dog* d3=new cat();// op ---> all constructor called

   // cat* a2= (cat*)new animal(); //  -->speak

}