#include<iostream>
using namespace std;
int main(){
    int i,j;

    for(i=0; i<5; i++){
        for(j=0; j<5-i; j++){
          cout<<5-i-j;
          
        }
        cout<<endl;
    }
    return 0;
}