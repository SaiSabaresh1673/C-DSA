#include<iostream>
#include<stack>
using namespace std;


int result(int val1,int val2,char c){
    if(c=='+') return val1+val2;
    else if(c=='-') return val1-val2;
    else if(c=='*') return val1*val2;
    else return val1/val2;

}
int main(){
    string s="79+4*8/3-";
    
    stack<int> val;

    for(int i=0;i<s.length();i++){
        if(s[i]>=48 && s[i]<=57) val.push((s[i]-48));
        else{
            int val2=val.top();
            val.pop();
            int val1=val.top();
            val.pop();
            int ans=result(val1,val2,s[i]);
            val.push(ans);
        }
         
    }
    cout<<val.top();
    
}