#include<iostream>
using namespace std;

void preinpost(int n){
    if(n==0) return;
    cout<<n;
    preinpost(n-1);
    cout<<n;
    preinpost(n-1);
    cout<<n;
}

int main(){
    preinpost(3);
}