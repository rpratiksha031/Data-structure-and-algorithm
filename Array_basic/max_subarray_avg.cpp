#include<iostream>
#include<limits.h>


using namespace std;

int main(){

    int arr[]={0,0,4,0,0,7,1,2,9};
    int n=9;
    int k=4;
    int j=k-1;
    // sum of first subarray
    int sum=0;
    int i=0;
    
    for(int y=i; y<=j; y++){
        
        sum+=arr[y];
      
    }

    cout<<"print 1 sum "<<sum<<endl;

    int maxSum=sum;
    j++;
    while(j<n){
        sum=sum-arr[i++];
        cout<<" 1 sum : "<<sum<<endl;
        sum=sum+arr[j++];
        cout<<" 2 sum : "<<sum<<endl;
        maxSum=max(maxSum,sum);

   cout<<"max sum : "<<maxSum<<endl;
    }


    double avg=maxSum/(double)k;

    cout<<avg;

}