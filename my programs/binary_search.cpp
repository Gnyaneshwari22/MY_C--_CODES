#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int binarySearch(int arr[], int size, int target) {
  int start = 0;
  int end = size - 1;

  int mid = start + (end - start ) / 2;

  while(start <= end) {
    int element = arr[mid];

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
int main()
{
        // vector<int> v{1,2,3,4,5,6};
  int arr[] = {1,2,3,4,5,6,7};
  int size = 7;
  int target=7;
//    int indexis=binarysearch(arr,size, 1);

   int Index_of_target=binarySearch(arr,size,target);

   if(Index_of_target==-1){
    cout<<"Traget not found"<<endl;
    cout<<"Traget not found"<<endl;

   }
   else{
    cout<<"target found at index: "<<Index_of_target<<endl;
   }

  return 0;
}

// ***********USING BINARY SEARCH LIBRARRY FUNCTION*****************vector<int> v{1,2,3,4,5,6};

//  if(binary_search(v.begin(), v.end(), 10))
//   {
//     cout<<"found"<<endl;
//   }
//  else{
//     cout<<"not found";
//    } 

//  return 0;

// } 