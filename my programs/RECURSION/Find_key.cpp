#include<iostream>
#include<string.h>
using namespace std;

bool Find_Key(char arr[],int& n,int i,char& key){
    if(i>=n)
      return 0;
    if(arr[i] == key){
        return 1;
    }
     bool ans =Find_Key(arr,n,i+1,key) ;  
     return ans; 
      
}

int main(){
    char arr[6]={'g','n','y','a','n','e'};
    int n=6;
    int i=0;
    char key='e';

    bool ans=Find_Key(arr,n,i,key);
    cout<<ans<<endl;

}