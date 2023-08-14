
#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int FindKey(int arr[][3],int row,int col,int key){
for(int i=0;i<row-1;i++){
 for(int j=0;j<col-1;j++)
 if(arr[i][j]==key){
 return 1;
 }
 }
 return 0;
}


int main(){
int arr[3][3];
   int row=3;
   int col=3;
   int key=5;

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
        cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }

      cout<<endl;

    //FindKey(arr,row,col,key);
    if(FindKey(arr,row,col,key)==true)
    {
    cout<<"found";
    }
    else{
    cout<<"not found";
    }
    return 0;
    }
