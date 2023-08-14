#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int main(){

vector<int> arr{10,10,20,30,40,20};
int sum=80;

for(int i=0;i<=arr.size();i++){
int element=arr[i];

for(int j=i+1;j<=arr.size();j++){

if(element+arr[j]==sum){

cout<<"the pair_sum is"<<"("<<element<<","<<arr[j]<<")"<<endl;

}
}
}
cout<<"not fond";
}
