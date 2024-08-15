#include<iostream>
using namespace std;
int Pow(int n){
    if(n==0)return 1;
    int ans=2*Pow(n-1);
    return ans;
}
int main(){
    int n;
    cin>>n;
    int Ans=Pow(n);
    cout<<Ans;
}