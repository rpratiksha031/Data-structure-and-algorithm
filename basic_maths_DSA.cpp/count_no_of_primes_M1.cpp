#include<iostream>
#include<vector>
using namespace std;

int countPrime(int n){
    if (n==0)return 0;
    vector<bool>prime(n,true);
    
    prime[0]=prime[1]=false;
      int ans=0;
      int i=0;
      for (i=2; i<=n; i++){
       
    
        if(prime[i]){
            ans++;
           int j=2*i;
             while(j<n){
                prime[j]=false;
                j+=i;
             }
        }
       
      }
       return ans;
}
int main(){
    int n;
    cin>>n;

    int Ans=countPrime(n);
    cout<<Ans;
}