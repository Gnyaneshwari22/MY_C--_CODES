#include<iostream>
using namespace std;

//recursion function

void PrintCounting(int n){
    //base condition
    if(n==0) 
    return;
     //processing
    cout<<n<<endl;
    //Recursive Relation
     PrintCounting(n-1);
}


int main(){
    int n;
    cin>>n;
    n=n-1;

    PrintCounting(n);
    return 0;
}

