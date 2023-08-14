#include<iostream>
using namespace std;

int factorial(int n){
    if(n==1) 
     return 1;
    int ans=1;
    return ans=n*factorial(n-1);
}


int main(){
    int n ;
    cin>>n;
    int ans=factorial(n);
    cout<<"the factorial of number is :"<<ans<<endl;
    return 0;
}