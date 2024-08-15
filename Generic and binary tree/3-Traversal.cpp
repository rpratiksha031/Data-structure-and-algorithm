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

    //for left subtree
  cout<<"Enter value for left of node :"<<data<<endl;
    newNode->left=createTree();

    //for rightSubtree
    cout<<"Enter value for right of node :"<<data<<endl;
    newNode->right=createTree();

    return newNode;

}

void preOrderTraversal(Node* newNode){
    if(newNode==NULL)return;

    //NLR

    // process current node
   cout<<newNode->data<<" ";

   //left
   preOrderTraversal(newNode->left);
  

  //right
   preOrderTraversal(newNode->right);

}


void inOrderTraversal(Node* newNode){
    if(newNode==NULL)return;

    //LNR



   //left
   inOrderTraversal(newNode->left);
  

  
    // process current node
   cout<<newNode->data<<" ";


  //right
   inOrderTraversal(newNode->right);

}

void postOrderTraversal(Node* newNode){
    if(newNode==NULL)return;

    //LRN



   //left
   postOrderTraversal(newNode->left);
  

  


  //right
   postOrderTraversal(newNode->right);

   
    // process current node
   cout<<newNode->data<<" ";

}
    
 
int main()
{
        Node* root=createTree();

         cout<<"Printing preorder :" ;
            preOrderTraversal(root);
           cout<<endl;

        cout<<"printing inorder :";
        
         inOrderTraversal(root);
         cout<<endl;

         
        cout<<"printing post order :";
         postOrderTraversal(root);
        
return 0;
}