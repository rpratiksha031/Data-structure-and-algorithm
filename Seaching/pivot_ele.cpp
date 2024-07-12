#include<iostream>
using namespace std;
int pivEle(int arr[],int n){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    if (start<=end){
        if (arr[mid]<arr[mid-1])
        
        {
            return mid-1;
        }
        else if(arr[mid]>arr[mid+1]){
            return mid;
        }
        else if (arr[start]>arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=(start+end)/2;
    }
    return -1;
}
int main(){
    int arr[]={12,13,14,2,3,4,5};
    int n=7;
    int ans=pivEle(arr,n);
     cout<<"ans is at index :"<<ans;
}
