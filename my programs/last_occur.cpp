#include<iostream>
#include<vector>
using namespace std;


int lastoccurance(vector<int>v,int target){
    int s=0;
    int e=v.size()-1;
    int mid=s + ((e-s)/2);
    int ans=-1;

    while(s<e){
        if(v[mid]==target){
            ans=mid;//store the ans
            s=mid+1;
        }
        else if(target<v[mid]){
            e=mid-1;//left search
        }
        else if(target>v[mid]){
            s=mid+1;//right search
        }
        mid= s+ ((e-s)/2);
         
    }
    return ans;
}


int main(){
    vector <int> v{1,4,4,4,5,5,5,6,7};
    int target=5;

    int First_Occr=lastoccurance(v,target);

    cout<<"ans is "<<First_Occr<<endl;
    return 0;
}