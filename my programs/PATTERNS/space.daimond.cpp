#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
         //HALF PORTION
    for(int row=0;row<n;row=row+1){

        //half pyermid
        for(int col=0;col<n-row;col=col+1){
            cout<<"*";
        }

        //space wala full pyramid
        for(int col=0;col<2*row+1;col=col+1){
            cout<<" ";
        }
   
          //half pyermid
        for(int col=0;col<n-row;col=col+1){
            cout<<"*";
        }
        cout<<endl;
    }
    
         
         //ANOTHER HALF PORTION
    for(int row=0;row<n;row=row+1){

        //half pyermid
        for(int col=0;col<row+1;col=col+1){
            cout<<"*";
        }

        //space wala full pyramid
        for(int col=0;col<2*n-2*row-1;col=col+1){
            cout<<" ";
        }
   
          //half pyermid
        for(int col=0;col<row+1;col=col+1){
            cout<<"*";
        }
        cout<<endl;
    }

}