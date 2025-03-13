#include<iostream>
#include<vector>
using namespace std;

    int print2largest(vector<int> &arr) {
        // Code Here
        int i=0;
        int j=arr.size()-1;
        int ans=0;
        
        while(i<j){
            if(arr[i]>arr[j] ){
             
              
                
           ans=arr[j]>ans?arr[j]:ans;
                  j--;
            }
            if(arr[i]<arr[j] ){
               
              
                
                ans=arr[i]>ans?arr[i]:ans;
                  i++;
                
            }
            
        }
        
        return ans;}

int main()
{
    vector<int>arr={3 ,3,4,5,6,6,9,1,8,10,8,0,78,67,56,100};
    int vec= print2largest(arr);
    cout<<vec;
        
return 0;
}