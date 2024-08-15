#include<iostream>
using namespace std;
void print(int arr[],int n,int i){
    if(i>=n){
        return;
    } 
    cout<<arr[i]<<" ";
    print(arr,n,i+1);
}

bool find(int arr[],int n,int target, int i){
    if(i>=n)return false; 
    if (arr[i]==target){
        return true;
    }
   bool ans= find(arr,n,target,i+1);
    return ans;
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    int i=0;
    int target=4;
    print(arr,n,i);
    cout<<endl;
    bool Ans=find(arr,n,target,i+1);
    if(Ans==true){
      cout<<"element found ";
    }
    else {
        cout<<"not found";
    }
}