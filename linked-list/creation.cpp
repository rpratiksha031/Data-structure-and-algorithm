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

print( head);

}

