#include<iostream>
using namespace std;

void indexinarray(int arr[],int x,int i,int n){
    if(arr[i]==x){
        cout<<i;
        return;
    }
    if(i==n){
        cout<<"-1";
        return;
    }
    indexinarray(arr,x,i+1,n);
}

int main(){
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    indexinarray(arr,x,0,n);
}