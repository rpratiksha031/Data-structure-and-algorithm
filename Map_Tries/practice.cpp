#include<iostream>
#include<vector>
using namespace std;

vector<int> subarraySum(vector<int> arr, int n, long long s) {    
    int i=0;
    int j=0;
    int sum=arr[i];
    
    vector<int>v;
    
    while(i<=n){
        // sum==s
        
        if(sum==s){
            cout<<"printing";
                cout<<i<<" "<<j;  cout<<endl;
            v.push_back(i+1);
            v.push_back(j+1);
            
            return v;
        }
        
        if (sum<s){
            sum=sum+arr[++j];


          
            cout<<i<<" "<<j;  cout<<endl;
            cout<<arr[i]<<arr[j];


            cout<<"sum "<<sum<<" ";
            
        }
        
        if(sum>s){

        i=i+1;
        j=i;
        sum=arr[i];
        
        }
    }
    
    if(v.empty()){
        v.push_back(-1);
    }
    
    return v;
    }

int main()
{
    int n=5;
    vector<int>arr={1,2,3,7,5};
    long long s=3;
   vector<int>vec={subarraySum(arr,n,s)};

    for(auto i:vec){
        cout<<i<<" ";
    }
        
return 0;
}