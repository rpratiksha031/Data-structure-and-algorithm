#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    for(i=0; i<n; i++){
        for(j=0; j<i+1; j++){
            if(j==0|| j==i || i==0 || i==n-1){
                cout<<" * ";
            }
            else
            {
                cout<<" ";
            }
        }
          cout<<endl;
    }
    return 0;
}
