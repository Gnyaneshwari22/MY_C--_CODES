#include<iostream>
using namespace std;
int main(){

 int n;
 cin>>n;
    for(int row=0;row<n;row=row+1){
        for(int col=0;col<n-row;col++){
            cout<<" r";
        }
        cout<<endl;
    }

    int e=(15*15)+(25*25);
    cout<<e;
    return 0;
}