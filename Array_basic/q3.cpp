#include<iostream>
using namespace std;

void reverseArr(int arr[], int n){
    int temp;
   temp=arr[n-1];
    for ( int i=n-1; i>=1; i--){
      arr[i]=arr[i-1];
    }
    arr[0]=temp;

   
}
int main(){
    int n=7;
    cout<<"our provided array : ";
    int arr[]= {1,2,3,4,5,6,7};
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    reverseArr(arr,n);
    cout<< "printing shifted array :  ";

    for(int i=0; i<n; i++){
        cout<<arr[i] <<" ";
    }
}
