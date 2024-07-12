#include<iostream>
using namespace std;

int Ans(int arr[],int n,int target){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    int ans=-1;
   while(start<=end){
    if(arr[mid]==target){
        start=mid+1;
        ans=mid;
    }
    else if(arr[mid]<target){
        start=mid+1;
    }
    else if(arr[mid]>target){
        end=mid-1;
    }
    mid=(start+end)/2;
     }
     return ans;
     
}
int main(){
    int arr[]={1,2,3,4,4,4,5,6,7};
    int target=4;
     int n=9;
    int last_occ = Ans(arr,n,target);

        cout<<"element found at index :"<<last_occ;
    };

