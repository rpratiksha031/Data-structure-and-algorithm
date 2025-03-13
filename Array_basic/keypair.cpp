#include<iostream>

#include<algorithm>

using namespace std;

bool find (int arr[],int n,int x){
    // for(int i=0; i<n; i++){
    //     for(int j=i+1; j<n; j++){

    //         if(arr[i]+arr[j]==x){
    //             return true;
    //         }
    //     }
    // }

    // return false;


    //Method ----->2

    sort(arr,arr+n);
    int i,j;
    i=0;
    j=n-1;
    while(i<j){
        if(arr[i]+arr[j]==x){
            return true;
        }
        if(arr[i]+arr[j]<x){
            i++;

        }
        if(arr[i]+arr[j]>x){
            j--;
        }
    }

    return false;
}

int main(){
 int arr[]={1,2,3,4,5,6,7};
 int n=7;
 int x=8;
 bool f=find(arr,n,x);  
  cout<<f;
}