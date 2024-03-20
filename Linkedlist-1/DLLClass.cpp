#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};

class DLL{
public:
    Node* head;
    Node* tail;
    int size;
    DLL(){
        head=tail=NULL;
        size=0;
    }
    void insertAtEnd(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            temp->prev=tail; //extra
            tail=temp;
        }
        size++;
    }
    void insertAtHead(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head->prev=temp; //extra
            head=temp;
        }
        size++;
    }
    void insertAtIndex(int idx,int val){
        if(idx<0||idx>size) cout<<"Invalid";
        else if(idx==0) insertAtHead(val);
        else if(idx==size) insertAtEnd(val);
        else{
            Node* t= new Node(val);
            Node* temp=head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next=t;
            t->prev=temp; //extra
            t->next->prev=t; //extra
            size++;
        }
    }
    void deleteAtHead(){
        if(size==0) {
            cout<<"list is empty";
            return;
        }
        head=head->next;
        if(head!=NULL) head->prev=NULL; //extra
        if(head==NULL) tail=NULL; //extra
        size--;
    }
    void deleteAtTail(){
        if(size==0) {
            cout<<"list is empty";
            return;
        }else if(size==1){ //extra
            deleteAtHead();
            return ;
        }
        Node* temp=tail->prev; //extra
        temp->next=NULL;
        tail=temp;
        size--;
    }
    void deleteAtInd(int idx){
        if(size==0) {
            cout<<"list is empty";
            return;
        }
        else if(idx<0||idx>=size){
            cout<<"Invalid Index";
            return;
        }else if(idx==0) return deleteAtHead();
        else if(idx==size-1) deleteAtTail();
        else{
            Node* temp=head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;
            }
            temp->next = temp->next->next;
            temp->next->prev=temp; //extra
            size--;
        }
    }
    int getAtInd(int idx){
        if(idx<0||idx>size){ 
            cout<<"Invalid";
            return -1;
        }
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else{
            Node* temp=head;
            for(int i=1;i<=idx;i++){
                temp=temp->next;
            }
            return temp->val;
        }
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;

    }

};


int main(){
    DLL list;
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.insertAtEnd(40);
    list.insertAtEnd(50);
    list.display();
    list.insertAtIndex(2,60);
    list.display();
    list.deleteAtTail();
    list.display();
    list.deleteAtHead();
    list.display();
    list.insertAtEnd(90);
    list.display();
    list.deleteAtInd(3);
    list.display();
    cout<<list.getAtInd(1);



}