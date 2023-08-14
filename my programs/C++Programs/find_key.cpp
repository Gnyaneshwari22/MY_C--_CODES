#include<iostream>
using namespace std;
int main(){


    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=10;
    int key;
    int v=0;
    cout<<"enter the key"<<endl;
     cin>>key;

      for (int i=0;i<=n-1;i++)
      {
          if(arr[i]==key){
            cout<<"the key found at index "<<i;
            v=1;
          }
      }

      if(v!=1)
        cout<<"key not found "<<endl;

        return 0;

}
