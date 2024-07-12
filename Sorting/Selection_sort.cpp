#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int>&v){
   int n=v.size();
    for(int i=0; i<n; i++){
        int min=i;
        for(int j=i+1; j<n; j++){
            if(v[j]<v[min]){
              min=j;
            }
        };
          swap(v[i],v[min]);
    }
}

int main (){
    vector<int>v={1,2,6,8,-3,-90,80,11,45,2,34};
    cout<<"Elements before sorting : ";
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort(v);
    cout<<"Elements after sorting : ";
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}