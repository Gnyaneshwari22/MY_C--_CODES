#include<iostream>
#include<string.h>
using namespace std;

void convertIntoUppercase(char name[]){
         int n=strlen(name);
         for(int i=0;i<=n-1;i++){
        //    if(name[i]>='a' && name[i]<='z'){
                name[i]=name[i]-'a'+'A';
           }
          
           
         }
int main(){

    char name[]="gnyaneshwari";

    convertIntoUppercase(name);
    cout<< name<<endl;

    return 0;
}