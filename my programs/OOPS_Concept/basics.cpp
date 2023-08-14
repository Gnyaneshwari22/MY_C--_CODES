#include <iostream>
#include <string.h>

using namespace std;

class Girl{
    public:

        int age;
        char gender;
        string  name;

        //1.default constructor
        Girl(){
            cout<<"default constructor called"<<endl;
        }
         //2.Parameterized constructor
        Girl(int age ,char gender,string name){
            this->age=age;
            this->gender='f';
            this->name="gnyaneshwari";

            cout<<"parameterized consturctor called ;"<<age<<endl;
        }
        
         //3.copy constructor ---->called by reference

         Girl(Girl &obj){
            this->age=obj.age;
            this->gender=obj.gender;
            this->name=obj.name;

            cout<<"calling copy constructor"<<endl;
         } 

        void work(){
            cout<<"she is a web developer "<<endl;
        }
        void status(){
            cout<<" she is Single"<<endl;
        }

        int getage(){
            return age;
        }

        void setage(int age){
          this->age=age;      //this is referring to current object
        }
};


int main(){

  //static allocation of objects
//    Girl gnyanu;
//    gnyanu.age=22;
//    gnyanu.gender='f';
//    cout<<"printing age: "<<gnyanu.age<<endl;
//    cout<<"printing gender: "<<gnyanu.gender<<endl;

//    gnyanu.work();
//    gnyanu.status();
    
//     gnyanu.setage(24);
//     cout<<gnyanu.getage();

////////////////////////////////////////////

//Dynamically allocated objects

//   Girl* gnyanu=new Girl;

//    (*gnyanu).age=22;
//    (*gnyanu).gender='f';

//    //alternate way
//    gnyanu->age=17;

//////////////////////////////////////////////////////////

 ///constructors---->initialization of an object

  //1.default constructor
    Girl Rachita;

  //2.Parameterized constructor
    Girl gnyan(29,'y',"ramesh");

   //3.copy consructor
   Girl tanvi=gnyan;
   Girl ujwala(tanvi);
    return 0;
}