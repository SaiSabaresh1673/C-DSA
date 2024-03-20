#include<iostream>
using namespace std;

class Student{
public:
    string name;
    int rno;
    float marks;
    Student(string name,int rno,float marks){
        this->name=name;
        (*this).rno=rno;
        (*this).marks=marks;
    }
};

int main(){
    Student s("sai",2,99);
    // s.name="sai";
    // s.rno=2;
    // s.marks=92.6;
    cout<<s.name;
}