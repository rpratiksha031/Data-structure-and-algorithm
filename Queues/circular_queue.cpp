#include<iostream>
using namespace std;

class CQueue{
public:
int *arr;
int size;
int front;
int rear;
int init_val=0;

CQueue(int size){
    arr=new int(size);

    this->size=size;
        for(int i=0; i<size; i++){
        arr[i]=0;
      
    }

      front=-1;
      rear=-1;
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

     CQueue q(6);   
     q.print();
return 0;
}

