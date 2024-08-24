#include<iostream>
#include<limits.h>
using namespace std;

void printArr(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

int PrintMinimum(int arr[], int size){
    int min=INT_MAX;
    for(int i=0; i<size; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"minimun number in the Array is :";
    return min;
}

void reverseArr(int arr[],int size){
        int left=0;
        int right=size-1;
        while (left<=right){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
        cout<<"Reversed Array is :";
    for (int i=0; i<size; i++){

        cout<<arr[i]<<" ";
    }
}
int main (){

    int arr[]={1,2,3,5,6,7,8,-9};
    int size=8;
    printArr(arr,size);
    int minAns=PrintMinimum(arr,size);
    cout<<minAns<<endl;
    reverseArr(arr,size);
    cout<<endl;
 return 0;
}