 #include<iostream>
 using namespace std;

 int main(){

    //can be initialized
    // const int x=10;
    // cout<<x<<endl;

    //x cannot be reassigned
    //x=56;
    //cout<<x;

  //  int *p=&x;
   // *P=10; 

  // ways to change const values
  //1.const date with non const pointer 
    //   const int *a=new int(2);  
    //int const *a=new int(2); same as above    
    //   cout<<*a<<endl;
    //  //*a=20; pointer value content cannot be reassigned
    
    //  int b=5;
    //  a=&b;   //but pointer can be reassigned
    //  cout<< *a <<endl;  //5 

    //////////////////// 

    //2.const pointer but non constant data
    int *const a=new int(2);
     cout<<*a<<endl;
    *a=30;         //pointer content can be reassigned   
    cout<<*a<<endl;
    //int b=50;
   // a=&b;   cannot do bcz pointer constant

   /////////////

   //CONST pointer ,CONST data

   const int *const x=new int (40);
   cout<<*x <<endl;
  

//    *x=24;   //cannot modify data content
//    int y=67;
//    x=&y;     //cannot modify pointer content

 }