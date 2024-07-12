#include<iostream>
#include<string.h>
using namespace std;
void reverse(char ch[], int len){
    int n=len;
    int i=0;
    int j=n-1;
    while(i<=j){
        swap(ch[i],ch[j]);
        j--;
        i++;
    }
}
int main(){
    char ch[]="Pratiksha";
    cout<<ch<<endl;
    int len=9;
   
    reverse(ch,len);
    cout<<ch;
}