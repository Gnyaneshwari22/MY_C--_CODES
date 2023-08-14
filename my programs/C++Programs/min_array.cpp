#include<iostream>
#include<limits.h>
using namespace std;
int main(){
     int arr[]={5,6,7,8,3,2,9,1,10};
     int n=8;
     int mini=INT_MAX;
     for (int i=0;i<=n-1;i++)
        {
          if(arr[i]<mini)
          mini=arr[i];
          }
      cout<<"the min num is  "<<mini<<endl;
    return 0;
    }

}
