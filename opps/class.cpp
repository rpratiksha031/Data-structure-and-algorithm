#include<iostream>
using namespace std;
class Student{
private:
int phone_no;
public:
string name;
int roll_no;

// constructor:: default
Student(){
  cout<<"constructor"<<endl;
}

//parameterized constructor

Student(int roll_no, string name){
    roll_no=roll_no;
    name=name;
    //phone_no=phone_no;
    cout<<"para const called";
}
void fun(){
    cout<<"I am a Student"<<endl;
}
};

class abc{
//instance

public:
 static int x;
 static int y;
 static void print(){
 cout<<"constructor "<<endl;

 }

};

int main(){
 
//  s1.name="sam";
//  s1.roll_no=39;

// Student s1;
// Student s2(1,"john");
// cout<<s2.name<<endl;

// Student *s3=new Student(78,"ram");
// s3->name;

abc obj;
obj.print();
Student s;
}
