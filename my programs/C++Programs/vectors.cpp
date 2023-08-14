#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> v{1,2,3,4};
    vector<int> w{5,6,7,8};
    vector<int> ans;

    for(int i=0;i<=v.size()-1;i++){
       ans.push_back(v[i]);
    }
     for(int i=0;i<=w.size()-1;i++){
       ans.push_back(w[i]);
    }

    for(int i=0;i<=ans.size()-1;i++){
      cout<<ans[i]<< "  ";
    }
   return 0;

}
