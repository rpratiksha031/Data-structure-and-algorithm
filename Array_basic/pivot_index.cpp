#include<iostream>
#include<vector>

using namespace std;

int final(vector<int>&arr, int n){

    //   vector<int>ans(n,0);
      vector<int>lsum(n,0);
      vector<int>rsum(n,0);
        
      for( int i=1; i<n; i++){

         lsum[i] +=lsum[i-1]+arr[i-1];
        
      }

      for(int i=0; i<n; i++){
        cout<<lsum[i]<<" ";
      }
      cout<<endl;

      for(int j=n-2; j>=0; j--){
        rsum[j] +=rsum[j+1]+arr[j+1];
       
     }
     
     for(int i=0; i<n; i++){
        cout<<rsum[i]<<" ";
      }
      cout<<endl;

     for(int k=0 ; k<n; k++){
        if(lsum[k]==rsum[k])return k;
     }

     return -1;
}

int main (){
vector<int>arr={4,2,0,4,2};
int n=5;

int ans=final(arr,n);

cout<<ans;
}