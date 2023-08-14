#include<iostream>
#include<vector>
using namespace std;

int BinarySearch(vector<int> &arr,int &n,int s,int e,int& target){
    if(s>e)                     //base case1
      return -1;

    int mid=(e+s)/2;  
    if(arr[mid]==target){         //base case 2
        return mid;
    }  

    if(arr[mid]>target){
       return BinarySearch(arr,n,s,mid-1,target) ; //RR
    }
      
    else{
        return BinarySearch(arr,n,mid+1,e,target) ;  //RR
    } 
}

int main(){
     vector <int> arr={10,20,30,40,50,60};
    int target=50;
    int n=arr.size();


    int s=0;
    int e=n-1;

    int key=BinarySearch(arr,n,s,e,target);
    if(key==-1){
        cout<<"target not found "<<endl;
    }
    else{
        cout<<"target is present at index :"<<key<<endl;

    } 
    return 0;

}