#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class LinkedList{
public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head=tail=NULL;
        size=0;
    }
    void insertAtEnd(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
    void insertAtHead(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
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
            size++;
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
        return 100;
    }
    void deleteAtHead(){
        if(size==0) {
            cout<<"list is empty";
            return;
        }
        head=head->next;
        size--;
    }
    void deleteAtTail(){
        if(size==0) {
            cout<<"list is empty";
            return;
        }
        Node* temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
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
            size--;
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
    LinkedList ll;
    ll.insertAtEnd(10);
    ll.insertAtEnd(20);
    ll.display();
    ll.insertAtEnd(30);
    ll.insertAtEnd(40);
    ll.display();
    ll.insertAtHead(90);
    ll.display();
    ll.insertAtIndex(2,80);
    ll.display();
    cout<<ll.size<<endl;
    cout<<ll.getAtInd(2)<<endl;
    ll.display();
    ll.deleteAtHead();
    ll.display();
    ll.deleteAtTail();
    ll.display();
    ll.deleteAtInd(2);
    ll.display();


}