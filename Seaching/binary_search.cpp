#include<iostream>
using namespace std;
int binarySearch(int arr[], int n, int target){
    int start=0;
    int end=n-1;
    int mid =(start+end)/2;
    while(start<=end){
        if(arr[mid]==target){
            return mid;
        }
        else if(target>arr[mid]){
          start=mid+1;
        }
        else if(target<arr [mid]){
            end=mid+1;
        }
        mid=(start+end)/2;
    }
    return -1;
    
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int target=8;
    int n=9;
    
    int searchAns=binarySearch(arr,n,target);
    if(searchAns==-1){
        cout<<"Element not found"<<endl;;
    }
    else{
        cout<<"Element found at index : "<<searchAns<<endl;
    }
}
