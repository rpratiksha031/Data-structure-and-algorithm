#include<iostream>
using namespace std;
void replace(char ch [],int n){
   int i=0;
   while(ch[i]!='\0'){
    char curr=ch[i];
    if(curr=='@'){
        ch[i]=' ';
    }
    i++;
   }
   
}
int main(){
    char ch[]="My@name@is@john";
    int n=26;
    cout<<ch<<endl;
    replace(ch,n);
    cout<<ch;
}