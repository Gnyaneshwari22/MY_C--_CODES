#include <iostream>
using  namespace std;

void update(int* a, int* b) {
    *a=100;
    *b=200;
}

int* solve(){
  int a=10;
  cout<< "adress of a "<<&a<<endl;
  cout<<"value at a "<<a<<endl;
  int* ans=&a;
  cout<<"adressof ans "<<&ans<<endl;
  cout<<"adress of a "<<ans<<endl;
  return ans;
}


int main(){


    // int a=5;
    // int* ptr=&a;
    // int* dsptr=ptr;
    // cout<<a<<endl; //5
    // cout<<&a<<endl;//addres
    // a++;
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;  //6
    // cout<<dsptr<<endl; //address of a 
    //  cout<<*dsptr<<endl;  //6

    //  cout<<sizeof(ptr)<<endl;
    //  cout<<sizeof(a)<<endl;

    //  int x=3;
    //  int y=10;
    //  int* p=&x;

    //  cout<<x<<endl; //3
    //  cout<<&x<<endl; //adress of x
    //   cout<<&p<<endl;//adress of p
    //    cout<<p<<endl;
    //    cout<<*p<<endl;//3
    //     cout<< *p*y<<endl;//30
    //     cout<<*p+10<<endl; //20


    //     int arr[10]={12,13,34,45,};
    //     int* m=arr;
        
    //     cout<<arr<<endl;
    //     cout<<&arr[0]<<endl;
    //     cout<<&arr<<endl;
    //     cout<<*m<<endl;
/*----------------------------------pointers with intger array-----------------------------------------*/
  /* int arr[10]={12,33,34,45,};
   int*  p=arr;

    cout<< *arr <<endl;  //12
     cout<< arr[0] <<endl;  //12
      cout<< &arr <<endl;  //adress of arr[0]
       cout<< &arr[0] <<endl;  //adress of arr[0]
        cout<< *arr+1 <<endl;  //13
          cout<< *(arr)+1 <<endl;   //13
    cout<< *(arr+1) <<endl;  //  33
    cout<< arr[1] <<endl; // 33
    cout<<   *(arr+2) <<endl;  //34
    cout<< arr[2] <<endl; //34
    cout<< *(arr+3) <<endl; //45
    cout<< arr[3] <<endl; //45 */
/*--------------------------------------POinters with character array---------------*/

    // char arr[10]="GNYANU";
    //  char*  cptr=arr; 

    //  cout<<arr<<endl; //gnyanu
    //   cout<<&arr<<endl;//base adress of arr
    //    cout<<arr[0]<<endl;//g
    // //    cout<<&arr[]<<endl;//base adress of arr
    //  cout<<cptr<<endl;//gnyanu
    //  cout<<&cptr<<endl;//adress of cptr
    //  cout<<*cptr<<endl;//g
    //  cout<<(arr+3)<<endl;//anu
    //  cout<<*(cptr+3)<<endl;//a
    //  char* c=&arr[0];

    //  cout<<c<<endl;
/*------------------------pointers with function----------------------------------*/
// int arr[4]={10,20,30,40};
// int* p=&arr[1];
// int* q=&arr[2];

// cout<<" Before updating the arr values :"<<endl;
// for(int i=0;i<=3;i++){
//     cout<<arr[i]<<" ";
// }
// cout<<endl;

// update(p, q);


// cout<<" address of arr[1]:"<<&arr[1]<<endl;
// cout<<" address of arr[2]:"<<&arr[2]<<endl;

// cout<<" value at p pointer :"<<p<<endl;
// cout<<" value at q  pointer :"<<q<<endl;

// cout<<" After updating the arr values :";

// for(int i=0;i<=3;i++){
//     cout<<arr[i]<<" ";
// }

// cout<<endl;
    

  cout<<"calling array "<<endl;
   int* a=solve();
  //  cout<<"adress of a "<<a<<endl;
   
   cout<<*a<<" value of a"<<endl;
   cout<<a<<" this is address of a"<<endl;
   

  return 0;
}

    

