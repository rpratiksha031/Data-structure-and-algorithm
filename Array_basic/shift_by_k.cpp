#include<iostream>
#include<vector>

using namespace std;

void shift(vector<int>& arr,int n,int k){


// imp notes ----> refrence k sath nhi hoga to koi change nhi aayega

  vector<int>ans(n);
  for(int i=0; i<n; i++){
    int newindex=(i+k)%n;
    ans[newindex]=arr[i];
    
  }


   arr=ans;

   
   }


int main (){
    vector<int>arr={1,2,3,4,5,6};
     
    int n=6;
    int k=2;


    
  for(int i=0; i<n; i++){
    cout<<arr[i];
  }

  cout<<endl;

  shift(arr,n,k);

  for(int i=0; i<n; i++){
    cout<<arr[i];
  }
}