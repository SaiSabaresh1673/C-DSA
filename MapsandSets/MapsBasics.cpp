#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string,int> m;
    pair<string,int> p1;
    p1.first="sai";
    p1.second=1;
    pair<string,int> p2;
    p2.first="Vineesh";
    p2.second=2;
    pair<string,int> p3;
    p3.first="yaswanth";
    p3.second=3;
    m.insert(p1);
    m.insert(p2);
    m.insert(p3);

    m["guru"]=4;
    m["charan"]=5;

    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    m.erase("charan");
    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl;
    cout<<m.size();



}