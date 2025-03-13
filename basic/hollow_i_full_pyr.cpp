#include<iostream>
using namespace std;

int main()
{
      int n;


      cout<<"enter your number :";

      cin>>n;
    
      
      for(int i=0; i<n; i++){

        // for spaces --->1
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }

        for(int j=0; j<=i+1; j++){
            if(j==0 || j==i){
                cout<<"* ";
            }else{
                cout<< "  ";
            }
        }

        
        cout<<endl;
      }
return 0;
}