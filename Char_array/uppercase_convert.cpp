#include<iostream>
using namespace std;
int find(char ch[],int size){
    int length=0;
    for(int i=0; i<size; i++){
        if(ch[i]=='\0'){
            break;
        }
        else{
            length++;
        }
    }
    return length;
}
void convert(char ch[],int len){
    int index=0;
    while(ch[index]!='\0'){
        char curChar=ch[index];
        if(curChar>='a'&&curChar<='z'){
            ch[index]=curChar-'a'+'A';
        }
        index++;
    }
    cout<<ch;
}
int main(){
    char ch[100];
    cin.getline(ch,100);
    int len=find(ch,100);
    cout<<"Length of character is :"<<len<<endl;
    convert(ch,len);
}