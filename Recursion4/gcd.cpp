#include<iostream>
#include<string>
using namespace std;

int gcdd(int a,int b){
    if(a==0) return b;
    else return gcdd(b%a,a);
}

int main(){
    int a=23,b=45;
    cout<<gcdd(b,a);
}