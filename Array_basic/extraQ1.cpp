#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,-5,3,-10,2,-11,12};
    
    cout<<"our provided numbers are :";
    for(int i=0; i<9; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int i =0; int j=0;
    for(i=0; i<9; i++){
    if(arr[i]<0){
        swap(arr[i],arr[j]);
        j++;
    }
    }
    cout<<"categorized numbers are :";

    for(int j=0; j<9; j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}