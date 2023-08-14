#include<iostream>
#include<vector>
using namespace std;

int SqurtNumber(int n){
    int s=0,e=n;
    int mid= s+ ((e-s)/2);
    int ans;

    while(s<=e){
        if(mid*mid==n){
            return mid;
        }
        if(mid*mid<n){
          ans=mid;
           s=mid+1;
        }
        else{
             e=mid-1;
        }
              
        
        mid= s+((e-s)/2);
    }
    return ans;
}

int main(){
    int n;
    int precision;
    cout<<"enter the number to be squar rooted"<<endl;
    cin>>n;
    cout<<"enter the precision"<<endl;
    cin>>precision;
    int squrt=SqurtNumber(n);
    
    cout<<"the squrt  is :"<<squrt<<endl;
     
  double step = 0.1;
  double finalAns = squrt;
  for(int i=0; i<precision; i++) {

    for(double j=finalAns; j*j<=n; j = j + step) {
        finalAns = j;
    }
    step = step / 10;
  }
  cout << "Final ans is. "<< finalAns << endl;


    return 0;

} 