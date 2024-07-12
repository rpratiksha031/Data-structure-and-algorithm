#include<iostream>
using namespace std;
string r_duplicate(string str){
int i=0;
string ans=" ";
while(i<str.length()){
    if(ans.length()>0 &&ans[ans.length()-1]==str[i]){
        ans.pop_back();
}
else{
    ans.push_back(str[i]);
}
i++;
}
return ans;
}
int main(){
 string str;
 cin>>str;
 cout<<str<<endl;
 string Ans=r_duplicate(str);
 cout<<Ans;
}