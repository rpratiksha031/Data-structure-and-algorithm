#include<iostream>
using namespace std;
 void Print(int n){
    if(n==1){
        cout<<1;
        return;
    }
    cout<<n<<" ";
    Print(n-1);
 }
int main (){
    int n;
    cin>>n;

    Print(n);
}