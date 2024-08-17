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

void insertWord(TrieNode* root, string word) {
  // cout << "recieved word: " << word << " for insertion " << endl;
  //base case
  if(word.length() == 0) {
    root->isTerminal = true;
    return;
  }

  char ch = word[0];
  int index = ch - 'a';
  TrieNode* child;
  if(root->children[index] != NULL) {
    //present
      child = root->children[index];
  }
  else {
    //absent
     child = new TrieNode(ch);
     root->children[index] = child;
  }

  //recursion
  insertWord(child, word.substr(1));

}


bool searchWord(TrieNode* root, string word) {
  //base case
  if(word.length() == 0) {
    return root->isTerminal;
  }

  char ch = word[0];
  int index = ch - 'a';
  TrieNode* child;

  if(root->children[index] != NULL) {
    //present or found
    child = root->children[index];
  }
  else {
    //not found
    return false;
  }

  ///baaaki recursion
  bool recursionKaAns = searchWord(child, word.substr(1));
  return recursionKaAns;

}

void deleteWord(TrieNode* root, string word ) {
  if(word.length() == 0) {
    root->isTerminal = false;
    return;
  }

  //1 case mera
  char ch = word[0];
  int index = ch - 'a';
  TrieNode* child;

  if(root->children[index] != NULL) {
    //present
    child = root->children[index];
  }
  else{
    //not present
    return;
  }
  //baaki recursion tera
  deleteWord(child, word.substr(1));
}


int main()
{

  bool i=true;
  cout<<i;

    
        TrieNode* root=new TrieNode('-'); 
        
        insertWord(root,"Pratiksha");
        
        insertWord(root,"Dare");
        // insertWord(root,"Daring");
        // insertWord(root,"Prashant");
        // insertWord(root,"Care");
        // insertWord(root,"Careless");

        bool ans1=searchWord(root,"Dare");

        cout<<ans1;

        // if(searchWord(root,"Dare")){
        //     cout<<"found";
        // }else{
        //     cout<<"not found";
        // }
return 0;
}