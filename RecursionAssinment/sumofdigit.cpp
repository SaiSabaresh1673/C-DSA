#include<iostream>
using namespace std;

void sumofdigit(int n,int sum){
    if(!(n>0)){
        cout<<sum;
        return;
    }
    int r=n%10;
    sumofdigit(n/10,sum+r);
}

int main(){
    int n;
    cin>>n;
    sumofdigit(n,0);
}