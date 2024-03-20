#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    for(int x:s){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<s.size()<<endl;
    int target=1;
    if(s.find(target)!=s.end()){
        cout<<"exists";
    }
    else cout<<"not exists";
}