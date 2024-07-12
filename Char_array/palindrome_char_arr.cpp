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

bool palindrom(char ch[],int len){
   int i=0;
   int j=len-1;
   while(i<=j){
    if (ch[i]==ch[j]){
        i++;
        j--;
    }
    else{
        return false;
    }
   }
    return true;
}
int main(){
    char ch[100];
    cin.getline(ch,100);
    int len=find(ch,100);
    //cout<<"Length of character is :"<<len;
    bool check=palindrom(ch,len);
    if (check){
        cout<<"valid palindrom";

    }else{
        cout<<"invalid palindrom";
    }

}