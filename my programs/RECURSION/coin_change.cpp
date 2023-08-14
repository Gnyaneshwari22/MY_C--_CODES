#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

int solve(vector <int>& arr, int target){
    if (target== 0)
     return 0;
    if (target<0) 
     return INT_MAX; 

    int mini=INT_MAX;
    for(int i=0;i<arr.size();i++){
        int ans=solve(arr,target-arr[i]);
        // cout<<"printing answer :"<<ans<<endl;
        if(ans!=INT_MAX){
            mini=min(mini,ans+1);
            //  cout<<"printing mini  :"<<mini<<endl; 
        }
    }  
    return mini;
}

int main(){
    vector <int> arr{1,2,3};
    int target=3;

    int ans= solve(arr,target);
    cout<<" answer is :"<<ans <<endl;
    return 0;
}
