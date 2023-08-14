#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> nums,int target,int start,int end) {
//   int start = 0;
//   int end = size - 1;

  int mid = start + (end - start ) / 2;

  while(start <= end) {
    int element = nums[mid];

    if(element == target) {//element found, then return index
      return mid;
    }
    
    if(target < element) {
      //search in left
      end = mid - 1;
    }
    else {
      //search in right
      start = mid + 1;
    }

    mid = start + (end - start ) / 2;

  }

    //element not found
  return -1;
}

int FindPivot(vector<int> nums){
    int s=0;                  //s=start,e=end,m=middle
    int e=nums.size()-1;
    int m=s+ ((e-s)/2);

    while(s<=e){
        if(m+1 < nums.size() && nums[m]>nums[m+1]){
            return m;
        }
            
        if(m-1>=0 && nums[m-1]>nums[m]){
            return m-1;
            }
         

        if(nums[s]>=nums[m]){
           e=m-1 ;//left search
        }
        
        else 
              s=m ;//right search
         m=  s+ ((e-s)/2);

    } 
    return s;
} 


int main(){


    vector<int> nums{ 4,5,6,7,0,1,2,3};
    int target=3;
    int ans;
    int Piovot_index=FindPivot(nums);

    if(target>=nums[0] && target<=nums[Piovot_index])
    {
        int ans=binarySearch(nums,target,0,Piovot_index);
        // return ans;
        cout<<"the target "<<nums[ans]<<" is at index :"<<ans<<endl;
    }

    if(Piovot_index+1<nums.size() && target>=nums[Piovot_index+1] && target<=nums[nums.size()-1])
    {
        int ans=binarySearch(nums,target,Piovot_index+1,nums.size()-1);
        cout<<"the target "<<nums[ans]<<" is at index :"<<ans<<endl;

    }

    // cout<<"the ans is :"<<ans<<endl;

    return -1;
}