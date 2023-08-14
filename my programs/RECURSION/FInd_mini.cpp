#include<iostream>
#include <limits.h>
using namespace std;

int Print_mini(int arr[],int& n,int i, int& mini){     ///&-> pass by reference 

    //Base condn jab tak i n se chota hai trab tak function call karo
    if(i>=n)
     return 1 ;

    if(arr[i]<mini){    //finding mini element
        mini=arr[i];
    } 
     Print_mini(arr,n,i+1,mini);  //recursion call (i+1 -> by incrementing the i value)
     return mini; 
}

int main(){
    int arr[]={10,20,30,40,50,80,3};
    int n=7;
    int i=0;
    int mini=INT_MAX;
    
    int ans=Print_mini(arr,n,i,mini);
    cout<<"the minimum element in the array :"<<ans<<endl;
    return 0;
}