#include<iostream>
#include<string>
using namespace std;

void generate(string s,int n){
    if(s.length()==n){
         cout<<s<<endl;
         return;
    }
    generate(s+'0',n);
    if(s.length()==0||s[s.length()-1]=='0') generate(s+'1',n);
}

int main(){
    int n=3;
    generate("",n);
}