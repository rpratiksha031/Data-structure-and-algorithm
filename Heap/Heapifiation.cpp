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
    void print() {
      for(int i=1; i<=size; i++) {
         cout << arr[i] << " ";
     }
    }

    int deleteFromHeap() {
      int answer = arr[1];
      //replacement
      arr[1] = arr[size];
      //last element ko delete uski original position se
      size--;
      int index = 1;
      while(index < size ) {
          int leftIndex = 2*index;
          int rightIndex = 2*index+1;

          //find out karna h , sabse bada kon
          int largestKaIndex = index;
          //check left child
          if(leftIndex <= size && arr[largestKaIndex] < arr[leftIndex]) {
            largestKaIndex = leftIndex;
          }
          if(rightIndex <= size && arr[largestKaIndex] < arr[rightIndex]) {
            largestKaIndex = rightIndex;
          }
          //no change
          if(index == largestKaIndex) {
            break;
          }
          else {
            swap(arr[index], arr[largestKaIndex]);
            index = largestKaIndex;
          }
      }
      return answer;
    }
};




void heapify(int *arr, int n, int index) {
  int leftIndex = 2*index;
  int rightIndex = 2*index+1;
  int largestKaIndex = index;

  //teno me se max lao 
  if(leftIndex <= n && arr[leftIndex] > arr[largestKaIndex]) {
    largestKaIndex = leftIndex;
  }
  if(rightIndex <= n && arr[rightIndex] > arr[largestKaIndex]) {
    largestKaIndex = rightIndex;
  }
  //after these 2 conditions largestKaIndex will be pointing towards largest elemnt among 3 
  if(index != largestKaIndex) {
    swap(arr[index], arr[largestKaIndex]);
    //ab recursion sambhal lega
    index = largestKaIndex;
    heapify(arr, n, index);
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