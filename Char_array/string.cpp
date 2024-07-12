#include<iostream>
using namespace std;

int main(){
    string name;
    string name2;
    cin>>name;
     cin>>name2;
    cout<<name<<endl<<name.length()<<endl;

    cout<<name.front()<<endl;

    cout<<name.back()<<endl;
   

    cout<<name.append(name2)<<endl;


    cout<<name<<endl;
   cout<<name.insert(2,"HELLO")<<endl;
}