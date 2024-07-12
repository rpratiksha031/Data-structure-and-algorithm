#include<iostream>
#include<vector>
using namespace std;
void missingNum(vector<int>arr){
    int size=arr.size();
    int left=0;
    for (int i=0; i<size; i++){
        if(left==arr[i]){
            left++;
        }
        else{
            cout<<"Missing number is : ";
            cout<<left;
        }
    }
}
int main(){
    vector<int>arr={0,1,2,4};
    missingNum(arr);
    return 0;
}
