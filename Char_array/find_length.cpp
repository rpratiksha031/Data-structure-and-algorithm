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
int main(){
    char ch[100];
    cin.getline(ch,100);
    int len=find(ch,100);
    cout<<"Length of character is :"<<len;
}