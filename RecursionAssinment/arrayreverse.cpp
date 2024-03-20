#include<iostream>
using namespace std;

void arrayrev(int arr[],int i,int n){
    if(i==n) return;

    arrayrev(arr,i+1,n);
    cout<<arr[i]<<" ";
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    arrayrev(arr,0,n);
}