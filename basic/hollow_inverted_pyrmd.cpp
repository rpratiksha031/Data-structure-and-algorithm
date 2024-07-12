#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++){
            if(i==0 || j==0 || j==n-i-1){            
            cout<<"*";
            }
             
                else{
                    cout<<" ";
                }
            

        }
        cout<<endl;
    }
    return 0;
}