
#include<iostream>
using namespace std;

void linearSearch(int arr[5], int n ,int val){
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            cout<<"element found";
            return;
        }
    }
    return;
}

int main()
{

    int arr[5]={1,2,3,4,5};
    int val=4;
    int n=5;
    linearSearch(arr,n,val);
        
return 0;
}