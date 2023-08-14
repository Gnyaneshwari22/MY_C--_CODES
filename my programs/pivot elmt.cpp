#include <iostream>
#include<vector>
using namespace std;


int FindPivot(vector<int> arr){
    int s=0;                  //s=start,e=end,m=middle
    int e=arr.size()-1;
    int m=s+ ((e-s)/2);

    while(s<=e){
        if(m+1 < arr.size() && arr[m]>arr[m+1]){
            return m;
        }
            
        if(m-1>=0 && arr[m-1]>arr[m]){
            return m-1;
            }
         

        if(arr[s]>=arr[m]){
           e=m-1 ;//left search
        }
        
        else 
              s=m+1 ;//right search
         m=  s+ ((e-s)/2);

    } 
    return -1;
} 

int main(){
    vector<int> arr{7,1,2,3,4,5,6};
    int ans=FindPivot(arr);
    cout<<"the pivot element is at index :"<<ans<<endl;
    return 0;

}