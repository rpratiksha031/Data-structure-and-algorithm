#include<iostream>
#include<vector>
#include<string>


using namespace std;

class Bird{

    public:

    int age,weight;
    int nol;
    string color;
    void eat(){
        cout<<"Bird is eating"<<endl;
    }
    void fly(){
        cout<<"Birds fly"<<endl;
    }


};

class Sparrow: public Bird{
public:
Sparrow(int age,int weight, string color, int nol){
    this->age=age;
     this->weight=weight;
      this->color=color;
       this->nol=nol;
}
void grassing(){
    cout<<"Sparrow grass"<<endl;
}
};

int main(){
    Sparrow s(1,1,"brown",2);
    cout<<s.color;
    return 0;
}