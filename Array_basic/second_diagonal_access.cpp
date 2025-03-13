#include<iostream>

using namespace std;

int main(){
    int n=6;
    int arr[][6] = 
    {
        { 1, 0, 3, 4,9,0},
        { 3, 5, 6, 4 ,9,8},
        { 9, 7, 1, 4,8,6},
        { 1, 1, 1, 1,5,3},
        {1,2,3,4,5,6},
        {1,2,3,4,5,6}
    };

    for(int i=0; i<n; i++){
        for(int j=0 ;j<n ; j++){
            if(i+j==n-1)
            cout<<arr[i][n-i-1];
        }
        cout<<endl;
    }

}
