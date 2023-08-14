#include<iostream>
#include<vector>
using namespace std;

int sor_array(int arr[],int n,int target){
    int s=0;
    int e=n-1;
    int m=s+ (e-s)/2;

    while(s<=e){
        if(arr[m]==target){
            return m;   
        }
        if(m+1<n && arr[m+1]==target){
            return m+1;
        }
        if(m-1 >=0 && arr[m-1]==target){
            return m-1;
        }
       
        if(arr[m]>target){
            e=m-2;
        } 
        else if(arr[m]<target){
            s=m+2;
        }
       m= s+ (e-s)/2; 

    }
    return -1;
} 

int main(){

    int arr[]={10,3,40,20,50,80,70};
    int n=7;
    int target=70;
    int ans=sor_array(arr,n,target);

    if(ans==-1){
        cout<<"not found"<<endl;
    }
    else{
        cout<<target<<" target found at index :"<<ans<<endl;
    }

    return 0;
}
