#include<iostream>
using namespace std;

class Stack
{
private:
    /* data */
public:

int *arr;
int size;
int top;

    Stack
(int size){
    arr=new int[size];
    this->size=size;
     this->top=-1;
}
     void push(int data){

        if (top==size-1){
            cout<<"stack overFlow";

        }else{
            top++;
        arr[top]=data;
        }
        
     }

     void pop(){

        if (top==-1){
            cout<<"Stack underflow";
        }else{
              top--;
        }
      
     }

     bool isEmpty(){
        if(top==-1){
            return true;
        }else{
            return false;
        }
     }

      int getTop(){
            if (top==-1){
                cout<<"Stack empty";
            }else{
                return arr[top];
                }
            }

       

       int getSize(){
        return top+1;
       }


       void print(){
         
         for(int i=0; i<getSize(); i++){
            cout<<arr[i];
         }cout<<endl;
       }

};


int main(){
 Stack st(9);
 st.push(89);
 st.getTop();
 st.print();

 
}
