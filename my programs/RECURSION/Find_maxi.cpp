#include<iostream>
#include <limits.h>
using namespace std;

int Print_min(int arr[],int n,int i, int& maxi){  /*maxi -->same variable is created for
                                                 maxi elemnet no copy will be created bcz of pass by reference */ 
    //base condition
    if(i>=n)
     return 1 ;

    if(arr[i]>maxi){     //finding max element
        maxi=arr[i];
    } 
    Print_min(arr,n,i+1,maxi); //recursion call (i+1 -> by incrementing the i value)
    return maxi;
}

int main(){
    int arr[]={10,20,30,40,50,80};
    int n=6;
    int i=0;
    int maxi=INT_MIN;
    
    int ans=Print_min(arr,n,i,maxi);
    cout<<"the maximum element in the array :"<<ans<<endl;

}