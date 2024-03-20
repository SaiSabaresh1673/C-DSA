#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;
    int c=0;
    for(int i=0;i<s.size();i++){
        if(s.size()==1) break;
        if(i==0){
            if(s[i]!=s[i+1]) c++;
        }
        else if(i==s.size()-1){
            if(s[i]!=s[i-1]) c++;
        }
        else if(s[i]!=s[i+1] && s[i]!=s[i-1]) c++;
    }
    cout<<c;
}