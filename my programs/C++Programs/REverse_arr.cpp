#include<iostream>
#include<utility>
using namespace std;
int main(){
    int arr[]={10,20,30,40,50,60,70,90};
    int n=8;
    int s=0;
    int e=n-1;

    while(s<=e){
      std::swap(arr[s],arr[e]);
      s++ ;
      e-- ;
    }
    for(int i=0;i<=n-1;i++)
     cout<<arr[i]<<"  ";

     return 0;

}
