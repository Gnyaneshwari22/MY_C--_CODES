#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

void PrintRowSum(int arr[][3],int row ,int col){
 for(int i=0;i<row;i++){
 int sum=0;
 for(int j=0;j<col;j++){
    sum=sum+arr[i][j];
    }
    cout<<"THE SUM OF row is :"<<sum<<endl;
    }
}

int main(){
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
        cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }

      cout<<endl;

     PrintRowSum(arr,row,col);
     return 0;

}
