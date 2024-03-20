#include<iostream>
using namespace std;

int main(){
    char str[]={'a','b','c','d'};

   for(int i=0;i<4;i++){
       cout<<str[i]<<" ";
    }
    cout<<endl;

    cout<<str;

    for(int i=0;str[i]!='\0';i++){
        cout<<str[i]<<" ";
    }

    
}