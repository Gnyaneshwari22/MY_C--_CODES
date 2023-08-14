#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int main(){

vector<int> arr{10,10,20,30,40,20};
int sum=80;

for(int i=0;i<=arr.size();i++){
int element1=arr[i];

for(int j=i+1;j<=arr.size();j++){
int element2=arr[j];

for(int k=i+2;k<=arr.size();k++){
int element3=arr[k];
if(element1+element2+element3==sum){

cout<<"the triplate_sum is"<<"("<<element1<<","<<element2<< ","<<element3<<")"<<endl;

}
}
}
}
cout<<"not fond";
}
