#include<iostream>
using namespace std;
int ans(int arr[],int n){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start=mid+1;
        }
        else {
            end=mid;

        }
        mid=(start+end)/2;
    }
    return start;
}
int main(){
    int arr[]={10,20,50,30,10};
    int n=5;
    int sol=ans(arr,n);
    cout<<"peak element at index:"<<sol;
    
}