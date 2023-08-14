#include<iostream>
using namespace std;

int Binary_Search(int arr[],int n,int key)
{
int s=0;
int e=n-1;
int m=s+ ((e-s)/2 );

while(s<=e){
{
if(arr[m]==key)
return m;
}
else  if(key<arr[m]){
e=m-1;
}
else{
 s=m+1;
 m=s+ ((e-s)/2 );
}
return -1;
}

int main()
{
  int arr[]={1,3,5,7,8,9,10};
  int n=7;
  int key=1;

  int IndexofArray=Binary_Search(arr,n,key);

  if(IndexofArray==-1){
  cout<<"key not found";
  }
  else{
  cout<<"key found at ";
  }

   return 0;

 }
