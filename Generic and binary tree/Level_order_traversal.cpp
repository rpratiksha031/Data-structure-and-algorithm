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
 
int main()
{
        Node* root=createTree();
        cout<<"printing levelwise :"<<endl;
        levelOrderTraversal(root);

return 0;
}