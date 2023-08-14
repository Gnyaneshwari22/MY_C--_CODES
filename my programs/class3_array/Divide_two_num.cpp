#include<iostream>
#include<vector>
using namespace std;

int solve(int devidend,int devisor ){
    int s=0;
    int e=devidend;
    int m=s+(e-s)/2;
    int ans;

    while(s<=e){
        if(m*devisor==devidend){
            ans =m;
            break;
        }
        if(m*devisor<devidend){
            ans=m;
            s=m+1;
        }
        else{
            e=m-1;
        }
        m=s+(e-s)/2;

    }
    return ans;

    // if((devisor<0 && devidend<0)||(devisor>0 && devidend>0)){
    //     return ans;
    // }
//     else{
//        return -ans;
//     }    
}

int main(){
      int devidend=22;
      int devisor=-5;

      int value=solve(devidend,devisor);

      cout<<"the ans is "<<value<<endl;
      return 0;
}

