#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int main(){


   //declaration ====int arr[3][3]={{1,2,3},{4,5,6},{6,7,8}};

    //cout<<arr[1][1]<<endl;
   // cout<<arr[2][0];


    //for taking input from user
   int arr[4][3];
   int row=4;
   int col=3;

   for(int i=0;i<=row-1;i++)
   {
     for(int j=0;j<=col-1;j++){
        cin>>arr[i][j];
        }
        cout<<endl;
    }

for(int i=0;i<=row-1;i++)
   {
     for(int j=0;j<=col-1;j++){
        cout<<arr[i][j];
        }
        cout<<endl;
     }
     return 0;
}





