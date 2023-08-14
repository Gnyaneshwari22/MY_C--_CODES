#include <iostream>
#include <vector>
using namespace std;

bool IsSorted(vector<int> &arr,int& n, int i){
    //base case
    if(i==n-1){    
        return false;
    }
    if(arr[i+1]<arr[i]){ 
        return true;
    }
    IsSorted(arr,n,i+1);  //recursion call
}


int main(){
    vector <int> arr={10,20,30,40,50,60};
    int i=0;
    int n=arr.size();


    // int s=0;
    // int e=(e+s)/2;

    bool ischeck=IsSorted(arr,n,i);
    if(ischeck){
        cout<<"Array is not sorted "<<endl;
    }
    else{
          cout<<"Array is  sorted "<<endl; 
    }
    return 0;
}