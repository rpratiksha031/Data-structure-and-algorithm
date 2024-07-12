#include<iostream>
using namespace std;
 string remove_ss(string s,string part){
    while(s.find(part)!=string :: npos){
        s.erase(s.find(part),part.length());
    }
    return s;
 }
int main(){
    string s;
    string part="The";
    cin>>s;
    cout<<s<<endl;
      
     string ans= remove_ss(s,part);
     cout<<ans;
}