#include<iostream>
using namespace std;


class Queue{
public:
int *arr;
int size;
int front;
int rear;
int init_val=0;

Queue(int size){
    arr=new int(size);

    this->size=size;
        for(int i=0; i<size; i++){
        arr[i]=0;
    }
    front =-1;
    rear=-1;
   };
    void push(int val){
        if(rear==size-1){
           cout<<"Queue is overflow";
        }
        else if(front==-1&&rear==-1){
            rear++;
            front++;
            arr[rear]=val;

        }else{
            rear++;
            arr[rear]=val;
        }
       }
     void pop(){
        //empty
        if(rear==-1&&front==-1){
            cout<<"Queue is underflow";
        }else if(rear==front){
              arr[front]=-1;
              front=-1;
              rear=-1;               
        }else{
          arr[front]=-1;
          front++;
        }
       
     }  

     bool isEmpty(){
        if (front ==-1&& front==-1){
            return true;
        }else{
            return false;
        }
     }

     int getSize(){
        return rear-front+1;
     }

     int getFront(){
         if(front==-1){
            cout<<"No element in queue";
            return -1;
         }else{
            return arr[front];
         }
     }

     void print(){
      for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
      }
      cout<<endl;
     }
};
int main()
{
       Queue q(5);
       q.push(8);
       q.push(9);
       q.push(10);
       q.push(11);
    //    q.push(12);
       q.print();  
      int ans= q.getFront();
      cout<<ans;
    
return 0;
}
