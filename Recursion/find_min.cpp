#include<iostream>
#include<limits.h>
using namespace std;
// void print(int arr[],int n,int i){
//     if(i>=n){
//         return;
//     } 
//     cout<<arr[i]<<" ";
//     print(arr,n,i+1);
// }

void find_min(int arr[],int n,int i, int & mini){
    if (i>=n){
        return;
    }
    mini=min(mini,arr[i]);
    find_min(arr,n,i+1,mini);
   
}

// // bool find(int arr[],int n,int target, int i){
//     if(i>=n)return false; 
//     if (arr[i]==target){
//         return true;
//     }
//    bool ans= find(arr,n,target,i+1);
//     return ans;
// }
int main(){
    int arr[]={10,20,3,4,5};
    int n=5;
    int i=0;
   int mini=INT_MAX;
//    int Ans= find_min(arr,n,i,mini);

 find_min(arr,n,i,mini);
   cout<<mini<<endl;  
}
