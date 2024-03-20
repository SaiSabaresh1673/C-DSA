#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class Queue{
public:
    int f;
    int b;
    vector<int> arr;
    Queue(int val){
        f=0;
        b=0;
        vector<int> v(val);
        arr=v;
    }
    void push(int val){
        if(b==5){
            cout<<"Queue is Full"<<endl;
            return;
        }   
        arr[b]=val;
        b++;
    }
    int pop(){
        if(f-b==0){
            cout<<"empty"<<endl;
            return -1;
        }
        f++;
    }
    int front(){
        if(f-b==0){
            cout<<"empty"<<endl;
            return -1;
        }
        return arr[f];
    }
    int back(){
        if(f-b==0){
            cout<<"empty"<<endl;
            return -1;
        }
        return arr[b-1];
    }
    int size(){
        return b-f;
    }
    void display(){
        for(int i=f;i<b;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }


};

int main(){
    Queue q(5);

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.display();
    q.push(50);
    q.push(60);
    q.display();
    q.pop();
    q.display();

}