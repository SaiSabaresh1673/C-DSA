#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseKele(queue<int>& q,int k){
    int n=q.size();
    stack<int> s;
    for(int i=1;i<=k;i++){
        int x=q.front();
        q.pop();
        s.push(x);
    }
    for(int i=1;i<=k;i++){
        int x=s.top();
        s.pop();
        q.push(x);
    }
    for(int i=1;i<=n-k;i++){
        int x=q.front();
        q.pop();
        q.push(x);
    }
    for(int i=1;i<=n;i++){
        int x=q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);

    }
}

int main(){
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    int k;
    cin>>k;
    if(k>q.size()) k=k%q.size();
    
    reverseKele(q,k);
}