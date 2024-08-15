#include<iostream>
using namespace std;

class Node{
public:
int data;
Node* left;
Node* right;
 
  Node(int val){
    this->data=val;
    this->left=NULL;
    this->right=NULL;

  }
};

Node* createTree(){
    cout<<" Enter the value:"<<endl;
    int data;
    cin>>data;

    if(data==-1)return NULL;

    //not null create node for data
    Node* newNode=new Node(data);
7
    //for left subtree
   cout<<"Enter value for left of node :"<<data<<endl;
    newNode->left=createTree();

    //for rightSubtree
    cout<<"Enter value for right of node :"<<data<<endl;
    newNode->right=createTree();

    return newNode;

}
 
int main()
{
        Node* root=createTree();
return 0;
}