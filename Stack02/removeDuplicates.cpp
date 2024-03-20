#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

void RemoveDupliactes(string s){
    stack<char> st;
    st.push(s[0]);
    string str="";
    str+=s[0];
    for(int i=1;i<s.length();i++){
        if(s[i]!=st.top()){
            st.push(s[i]);
            str+=s[i];
        }else{
            continue;
        }
    }
    for(int i=0;i<str.length();i++){
        cout<<str[i];
    }


    
}
int main(){
    string s="aaabbcddaabffg";
    RemoveDupliactes(s);

}