#include<iostream>
#include<limits.h>
using namespace std;
int main(){
     int arr[]={2,3,4,7,8,9,10,1,15};
     int n=9;
     int maxi=INT_MIN;
     for (int i=0;i<=n-1;i++)
        {
          if(arr[i]>maxi)
          maxi=arr[i];
          }
      cout<<"the max num is  "<<maxi<<endl;
    return 0;
    }
