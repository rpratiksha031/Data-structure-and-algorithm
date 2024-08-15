#include<iostream>
#include<queue>
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

 Node* insertIntoBst(Node* root,int data){
       if(root==NULL){
        root=new Node(data);
        return root;
       }

       //not the first node
       // data<root node

       if(data<root->data){
        root->left=insertIntoBst(root->left,data);
       }

       // data> root node
       else{
        root->right=insertIntoBst(root->right,data);
       }

 }

 void levelOrderTraversal(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);


    while(q.size()>1){
       Node* front=q.front();
       q.pop();
           if(front==NULL){
            cout<<endl;
            q.push(NULL);

   }else{
    cout<<front->data<<" ";

    if(front->left !=NULL){
     
        q.push(front->left);
    }

    if(front->right!=NULL){
      
        q.push(front->right);
    }
   }
    }
}

  void createBst(Node* &root){
      cout<<"Enter the value"<<endl;

      int data;
      cin>>data;
      while(data !=-1){

       root= insertIntoBst(root,data);
        cin>>data;
      }
   
  }
int main()
{
         Node* root=NULL;
         createBst(root);
         cout<<"Printing No"<<endl;
         levelOrderTraversal(root);
         
return 0;
}