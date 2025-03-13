#include<iostream>
using namespace std;

void populate(int arr[9],int n){


          for(int i=1; i < n; i++){
            if(i%2==0){
               arr[n-i+1] = i;
               cout<<"arr  ele "<<n-i+1<<"  "<<arr[n-i+1]<<endl;
            }
            if(i%2==1){
                
                  arr[i-1] = i;
                  cout<<"arr  element "<<i-1<<" " <<arr[i-1]<<endl;
            
            }
               
    }
    
  

      
}

int main()

{
    int n=9;
    
    int arr[9];
    populate(arr,n);
        
return 0;
}