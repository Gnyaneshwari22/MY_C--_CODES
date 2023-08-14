#include<iostream>
#include<string>
using namespace std;

void PrintSubsequence(string& str,string output, int i){
      if(i>=str.length()){
        cout<<output<<endl;
        return ;
      }

      //exclude

      PrintSubsequence(str,output,i+1);

      //include
      PrintSubsequence(str,output+str[i],i+1);


}


int main(){
    string str="abcdef";
    string output="";
    int i=0;

    PrintSubsequence(str,output,i);

    return 0;
}