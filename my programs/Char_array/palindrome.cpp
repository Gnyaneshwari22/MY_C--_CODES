#include<iostream>
#include<string.h>

using namespace std;

bool palindrome(char name[]){
     int n=strlen(name);
     int i=0;
     int j=n-1;

     while(i<=j){
        if(name[i]==name[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
     }
     return true;
}


int main(){
    char name[]="rac";

    int ans=palindrome(name);

    if(ans==true){
        cout<<"given string is palindrome "<<endl;
    }
    else{
           cout<<"given string is not a palindrome "<<endl;
    } 
    return 0;
}