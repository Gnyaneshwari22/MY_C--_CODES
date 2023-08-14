#include<iostream>
using namespace std;

void print_digit(int& n){
    if(n==0) return ;
    cout << "Prining value of n "  << n << endl;
    int digit=n%10;
      n=n/10;

    print_digit(n) ;
     cout<<digit<< " "<<endl;
    
}

int main(){
    int n=0647;
    if(n==0)
       cout<< "printing digit "<<n<< endl;
    print_digit(n);
}
