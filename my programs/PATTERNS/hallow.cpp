#include<iostream>
using namespace std;
int main(){

 int rowcount;
 int colcount;
 cin>>rowcount;
 cin>>colcount;

    for(int row=0;row<=rowcount;row=row+1){
        for(int col=0;col<=colcount;col++){

            if(row==0||row==rowcount){
                cout<<" *";
            }
            else{
             if(col==0){
                    cout<<" *";
                    }
                    else if(col==colcount){
                        cout<< " *";
                    }
                    else{
                    cout<<" R";
                    }
            }           
        }
        cout<<endl;
    }
   cout<<endl;
    return 0;

    int n=(15*15)+(25*25);
    cout<<n;
}