#include<iostream>
using namespace std;
int main(){

 int n;
 cin>>n;
    // for(int row=0;row<n;row=row+1){
    //      //for printing space part
    //     for(int col=0;col<n-row-1;col++){
    //         cout<<" ";
    //     }

    //     //for printing star part
    //     for(int col=0;col<2*row+1;col++){
    //         //if frst and last col print start else space

    //         if(col==0){
    //             cout<<"R";
    //         }
    //         else if(col==2*row){
    //             cout<<"R";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    //for another half part
     int row=0;
    for( row=0;row<n;row=row+1){
        //for space
        for(int col=0;col<row;row=row+1){
            cout<<" ";
        }
        //for start
        for(int col=0;col<2*n-2*row-1;col=col+1){
            if(col==0|| col==2*n-2*row-2){
                cout<<"R";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
