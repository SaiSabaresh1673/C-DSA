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
void displayRev(Node* tail){
    while(tail){
        cout<<tail->val<<" ";
        tail=tail->prev;
    }
}
void display(Node* head){
    while(head){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main(){
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    Node* e=new Node(50);

    b->prev=a;
    c->prev=b;
    d->prev=c;
    e->prev=d;

    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;

    display(a);
    displayRev(e);

}