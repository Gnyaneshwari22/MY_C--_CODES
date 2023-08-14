#include<iostream>
using namespace std;
int main(){

    int arr[]={10,20,30,40,50,60,70,90};
    int n=8;
    int s=0;
    int e=n-1;

    while(true){
     if(s>e)
      break;

      cout<<arr[s]<<" ";
      cout<<arr[e]<<" ";
        s++;
        e--;
    }

 return 0;


 }
