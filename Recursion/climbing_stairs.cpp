#include<iostream>
using namespace std;

int stair(int n){
    if(n==0){return 1;};
    if (n==1){return 1;};
    int ans=stair(n-1)+stair(n-2);
    return ans;
}
int main(){
    int n;
    cout<<"Enter the no of stairs :"<<endl;
    cin>>n;
    int Ans=stair(n);
    cout<<"Total no ways to climb on stairs : "<<Ans;
}