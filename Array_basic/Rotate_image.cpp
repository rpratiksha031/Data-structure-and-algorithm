#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void transpose(vector<vector<int>>&arr){
    int n= arr.size();
    for (int i=0; i<n; i++){
        for(int j=i; j< arr[i].size(); j++){
            swap(arr[i][j],arr[j][i]);
        };
    };
};
//reverse
void reverse(vector<vector<int>>&arr){
    for(int i=0; i<arr.size(); i++){
        reverse(arr[i].begin(),arr[i].end());
    }
}
int main(){
      vector< vector<int>>arr{
        {1,2,3},
        {4,5,6},
        {7,8,9}
      };
     for (int i=0; i<arr.size(); i++){
        for(int j=0; j<arr[i].size(); j++){
            cout<<arr[i][j]<<" ";
        };
        cout<<endl;
     };
    cout<<endl;
     transpose(arr);
     reverse(arr);
     for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr.size(); j++){
        cout<<arr[i][j]<<" ";
     };
     cout<<endl;
     };
    return 0;
};
