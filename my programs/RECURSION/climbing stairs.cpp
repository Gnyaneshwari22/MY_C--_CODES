#include<iostream>
using namespace std;

int CountWays(int n){

    //base condition
    if(n==1)
     return 1;
    if(n==2)
      return 2; 

    //recursive relation       (similar to febonacci series)
    return  CountWays(n-1)+CountWays(n-2); 
}
int main(){
    int n;
    cin>>n;
    int ans=CountWays(n);

    cout<<"number of ways to reach the :"<<n<< "th stair is "<<ans<<endl;
    return 0;
}