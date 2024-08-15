#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(){
        this->next=NULL;
    } 
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void print(Node* head){
  Node* temp=head;
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
  } 
  cout<<endl;
}

 int insertAtbegin(Node* &head,int data){
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
  }

  int insertAtEnd(Node* &head,Node* &tail,int data ){
   Node* temp=new Node(data);
   tail->next=temp;
   tail=temp;

  }
  int insertAtPos(Node* &head,Node* &tail,int data ,int pos){
    Node* temp=new Node(data);
    Node* cur=head;
    Node* prev=NULL;
    if(pos==0){
        cout<<"Not valid pos";
    }
    else if (pos==1){
        insertAtbegin(head,data);
    }
    else {
 while(pos!=1){
      pos--;
      prev=cur;
      cur=cur->next;
    }
    prev->next=temp;
    temp->next=cur;
    }
   
    
  }
int main(){
Node* head;
Node* first=new Node(19);
Node* second=new Node(24);
Node* third=new Node(67);
head=first;
head->next=second;
second->next=third;
third->next=NULL;
Node* tail;
tail=third;
print( head);
cout<<"after inserting 56 at begining "<<endl;
int ans= insertAtbegin(head,56);
print( head);
cout<<"insert 99 at the end :"<<endl;
int Ans2= insertAtEnd( head,tail,99);
print( head);
cout<<"at pos 4 :"<<endl;
int ans3= insertAtPos(head,tail,10000 ,4);
print( head);
}