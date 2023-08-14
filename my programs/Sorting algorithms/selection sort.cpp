#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v{5,4,3,2,1};
    int n=5;


    for(int i=0;i<n-1;i++){
        int miniIndex=i;
        for(int j=i+1;j<n;j++){
            if(v[j]<v[miniIndex]){
                miniIndex=j;
            }

           
        }
        swap(v[i],v[miniIndex]); 
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<"  ";
    }
   return 0;
}