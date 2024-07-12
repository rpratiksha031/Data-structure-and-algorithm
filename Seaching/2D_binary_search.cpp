#include<iostream>
using namespace std;
bool Ans(int arr[][3],int n,int target){
    int col=3;
    int row=3;
  int s=0;
  int e = n-1;
  int mid=s+(e-s)/2;
  while(s<=e){
    int rIndex=mid/col;
    int cIndex=mid%col;
    int currNumber=arr[rIndex][cIndex];
    if(currNumber==target)
    return true;
    else if(target>currNumber){
        s=mid+1;
    }
    else{
        e=mid-1;
    }
    mid=s+(e-s)/2;
  }
  return false;
};
int main(){
    int arr[][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int target=8;
    int n=9;
    bool ans=Ans(arr,n,target);
    cout<<"Target("<<target <<")found(1) or not(0) :"<<ans;
}