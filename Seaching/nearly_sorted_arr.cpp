#include<iostream>
using namespace std;
int search(int arr[],int n,int target){
 int s=0;
 int e=n-1;
 int mid =(s+e)/2;

 while (s<=e){
    if(mid-1>=0 && arr[mid-1]==target){
        return mid-1;
    }
    if(mid+1<n && arr[mid+1]==target){
        return mid+1;
    }
    if(arr[mid]==target){
        return mid;
    };
    if(target>arr[mid]){
        s=mid+2;
    }
    else{
          e=mid-2;
    };
     mid = (s+e)/2;
 }
 return -1;
};
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=7;
    int target=7;
    int ans= search(arr,n,target);
    if (ans == -1){
        cout<<"Element not found. "<<endl;
    }
    else{
        cout<<"Element found at index : "<<ans;
    }
}