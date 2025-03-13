#include<iostream>
using namespace std;

int main()
{

    int n;
    cin>>n;

    int i=0;

      for( i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<" ";
        }
        for(int j=0; j<n-i; j++){

            if(j==0 ){
              cout<<"*";
            }else{
                cout<<" ";
            }  }
            
            
            for(int j=0; j<n-i; j++ ){

                if(j==n-i-2){
                    cout<<"* ";
                }else{
                        cout<<" ";
                }
                
            }           
        cout<<endl;
      }  
return 0;
}