#include<iostream>
using namespace std;

class TrieNode
{
private:
    /* data */
public:

   char value;
   TrieNode* children[26];
   bool isTerminal;
    TrieNode(char val){
        this->value=val;
       for(int i=0; i<26; i++){
        children[i]=NULL;
       }
       this->isTerminal=false;
    };
  
};




int main()
{
        TrieNode* root=new TrieNode('-'); 
return 0;
}