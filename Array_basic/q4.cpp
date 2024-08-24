#include<iostream>
#include<vector>
using namespace std;
void shiftElements(vector<int>arr, int k){
int size= arr.size();
vector<int>ans(size);
for (int i=0; i<size; i++){
    int j = (i+k) % size;
    ans[j]=arr[i];
}
   cout<<"After shifting numbers are as follows : ";
   for (int i=0; i<size; i++){
        cout<<ans[i]<<" ";
   }
}
int main(){
    int k;
    cout<<"Tell number by that you want shifting"<<endl;
    cin>>k;
    vector<int>arr={1,2,3,4,5,6,7};
  //  int size=arr.size();
  cout<<"our elements :"<<endl;
  for (int i=0; i<arr.size(); i++){
    cout<<arr[i] <<" ";
  }

  shiftElements(arr,k);
    return 0;
}