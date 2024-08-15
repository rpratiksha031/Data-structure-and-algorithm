#include<iostream>
using namespace std;


class Heap{

    public:
    int *arr;
    int capacity;
    int size;

    Heap(int capacity){

       
        this->arr=new int[capacity];

         this->capacity=capacity;
        this->size=0;

    }

    void insert(int val){
        if(size==capacity){
            cout<<"Overflow condition "<<endl;
            return;
        }
        

        // size will increase each time 

        size++;
        int index=size;

        arr[index]=val;

      

        while(index>1){
              int parentIndex=index/2;
            if(arr[index]>arr[parentIndex]){
              swap(arr[index],arr[parentIndex]);

            index=parentIndex;
        }else{
            break;
        }

            }
           

    }

    void print(){
        for(int i=1; i<=size; i++){
            cout<<arr[i]<<" ";
        }
    }
};
int main()
{

    Heap h(6);
    h.insert(10);
    h.insert(20);
    h.insert(5);
    h.insert(11);
    h.insert(6);

    h.print();

        
return 0;
}