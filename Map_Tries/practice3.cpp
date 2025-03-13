#include<iostream>
#include<vector>
using namespace std;



    vector<long long int> productExceptSelf(vector<long long int>& arr) {

        // code here
        int n=arr.size();
        vector<long long int>ans;
        int prod=1;
        
        for (int i=0; i<n; i++){
            prod=prod*arr[i];
            cout<<prod<<endl;
        }
        
        cout<<prod;
        for(int i=0; i<n; i++){

            // cout<<i;
               long long int prod2=prod/arr[i];
                cout<<" prod ";
                 cout<<prod2 <<endl;
               ans.push_back(prod2);
        
              
        }
        
        return ans;
    }


int main()
{

    vector<long long int>arr={2,82,12,92,22,12};
        // code here
productExceptSelf(arr);
     

        
return 0;
}

