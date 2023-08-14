
#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

void PrintRowSum(int arr[][3],int row ,int col){
 for(int j=0;j<row;j++){
 int sum=0;
 for(int i=0;i<col;i++){
    sum=sum+arr[j][i];
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
        cin>>arr[j][i];
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
