#include<iostream>
#include<limits.h>
using namespace std;

int find (int arr [][4],int n){


    int Ans=INT_MIN;
    
   for(int i=0; i<4; i++){
    
 
    int c=0;
    for(int j=0; j<n; j++){
        if(arr[i][j]==1)c++;
    }

    if(c>Ans){

        Ans=c;
        
    }
  

   
}



  return Ans;
}
 
int main (){
  int n=4;
  
    int arr [][4]={
        {1,0,1,0},
        {1,0,0,0},
        {0,0,0,0},
        {1,1,1,1}
    };

    int val=find(arr,n);
    cout<<"printing ANS "<<val;

}