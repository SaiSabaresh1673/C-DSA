#include<iostream>
#include<set>
#include<map>
using namespace std;
int main(){
    // set<int> s;
    // s.insert(1);
    // s.insert(2);
    // s.insert(3);
    // s.insert(0);
    // for(int ele:s){
    //     cout<<ele<<" ";
    // }

    map<int,int> m;
    m[1]=30;
    m[2]=20;
    m[3]=10;

    for(auto ele:m){
        cout<<ele.first<<" "<<ele.second<<endl;
    }


}