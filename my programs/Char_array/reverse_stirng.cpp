#include<iostream>
#include<string.h>
using namespace std;

int getlength(char name[])
   {
    int length=0;
    int i=0;
    while(name[i]!='\0'){
        length++;
        i++;
    }
    return length;
   }

 void reverse_string(char name[]){
      int n=getlength(name);
       int i=0;
      int j=n-1;

      while(i<=j){
         swap(name[i],name[j]);
         i++;
         j--;
     }
 }  

int main(){
    char name[200];
    cin>>name;

     reverse_string(name);

     cout<<"after reversing the string ::"<< name <<endl;
     return 0;

}