#include<iostream>
using namespace std;
int main(){
    int target;
 cin>>target;
    int arr[10]={1,2,3,4,5,6,7,8,9,11};
    for (int i=0; i<10; i++){
        cout<<arr[i];
    }
    cout<<endl;
    cout<<"now we are doubling the array"<<endl;
    for(int j=0; j<10; j++){
        cout<<2*arr[j];
    }
   
    for (int i=0; i<10; i++){
        if(arr[i]==target){
            cout<<"target found";
            break;
        } 
    }
    cout<<endl;
    return 0;
}