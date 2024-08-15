#include<iostream>
using namespace std;
 int Fact(int n){
    if (n==0)return 1;
    if (n==1)return 1;

    int ans=n*Fact(n-1);
    return ans;
 }
int main(){
    int n;
    cin>>n;
    int Ans=Fact(n);
    cout<<"factorial of "<<n<<" is : "<<Ans;
}