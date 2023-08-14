#include<iostream>
using namespace std;


int PeakElement(int arr[],int n)
 {
    int s=0;
    int e=n-1;
    int m= s + ((e-s)/2);

    while(s<e){
        if (arr[m]<arr[m+1]){
            s=m+1;
        }
        else{
            e=m;
        }
        m= s + ((e-s)/2);
    }
    return s;
 }

int main(){
    int arr[]={1,3, 20 ,4, 1,0};
    int n=6;


    int index_of_element=PeakElement(arr,n);

   
        cout<<"Peak element found at index : "<<index_of_element<<endl;

    return 0; 
}