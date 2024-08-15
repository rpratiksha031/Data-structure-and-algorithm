#include<iostream>
using namespace std;
int main(){
    int a=5;
    int* ptr=&a;

    cout<<"printing a :"<<a<<endl;
    cout<<"printing ptr :"<<ptr<<endl;
    cout<<"printing *ptr :"<<*ptr<<endl;
    cout<<"printing & ptr : "<<&ptr<<endl;
}