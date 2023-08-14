#include <iostream>
using namespace std;

int febonacci(int n){
    if(n==1) return 0;
    if(n==2) return 1;

    return febonacci(n-1)+febonacci(n-2);
}

int main(){
    int n;
    cout<<"enter the nth term u want to see :"<<endl;
    cin>>n;
    int ans=febonacci(n);
    cout<< n <<"th term is :"<<ans<<endl;
    return 0;
}
