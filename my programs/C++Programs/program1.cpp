#include<iostream>
#include<limits.h>
using namespace std;
int main(){
     int arr[]={2,3,4,7,8,9,10,1};
     int n=8;
     int mini=INT_MAX;
     for (int i=0;i<=n-1;i++)
        {
          if(arr[i]<INT_MAX)
          mini=arr[i];
          }
      cout<<"the max num is  "<<mini<<endl;
    return 0;

}
