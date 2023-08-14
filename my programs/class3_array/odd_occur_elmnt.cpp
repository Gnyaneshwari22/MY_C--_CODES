#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int> v){
    int s=0;
    int e=v.size()-1;
    int mid=s+(e-s)/2;

    while(s<=e){
        if(s==e){
            return s;
        }
        // TWO cases ---->mid even and mid odd
        if(mid%2==0){             //if mid is even 
            if(v[mid]==v[mid+1])
             s=mid+2;
            else  
              e=mid;    
        }
        if(mid%2!=0){             //if mid is odd
            if(v[mid]==v[mid-1])
             s=mid+1;
            else 
              e=mid-1;  
        }
       mid=s+(e-s)/2;
    } 
    return -1;
}

int main(){
    vector <int> v{1,1,2,2,3,3,4,4,5,5,6,6,7,7,8,8,9,9,600,600,4,4,3,3,78,78,45};

    int ans=solve(v);
    cout<<"the odd accuring element is "<<v[ans]<<" present at index  :"<<ans<<endl;
    return 0;
}