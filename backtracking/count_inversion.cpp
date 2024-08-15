#include<iostream>
using namespace std;
int count_inversion(int arr[],int size){
    int count=0;
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
              count=arr[i]>arr[j]?count+1:count;
        }
    }return count;
}
int main(){
    int arr[]={8,4,2,1};
    int size=4;
    int Ans=count_inversion(arr,size);
    cout<<Ans;
}