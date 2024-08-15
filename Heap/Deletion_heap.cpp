#include<iostream>
using namespace std;


class Heap{

    public:
    int * arr;
    int capacity;
    int size;

    Heap(int capacity){

        this->capacity=capacity;
        this->arr=new int[capacity];
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



    int deleteFromHeap(){
     int ans=arr[1];

     //replacement

     arr[1]=arr[size];
     size--;

     // replacement for correct position 

      int index=1;
      while (index<size){
       int leftChild=2*index;
       int rightChild=2*index+1;

       int LargestNum=index;

      // checkin num

      if(leftChild<=size&& arr[LargestNum]<arr[leftChild]){
        LargestNum=leftChild;
      }
      
      if(rightChild<=size&& arr[LargestNum]<arr[rightChild]){
        LargestNum=rightChild;
      }

      if(LargestNum==index){
        break;
      }else{
        swap(arr[index],arr[LargestNum]);
        index=LargestNum;
      };

      }
      return ans;
      
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

    cout<<endl;
    h.deleteFromHeap();
   
    h.print();
        
return 0;
}