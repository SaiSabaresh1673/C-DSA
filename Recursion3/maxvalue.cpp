#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

void maxi(int arr[],int n,int i,int max){
    if(i==n){
        cout<<max;
        return;
    }
    if(arr[i]>max){ 
        max=arr[i];
    }
    maxi(arr,n,i+1,max);    
}
int maxi1(int arr[],int n,int i){
    if(i==n) return INT_MIN;   
    return max(arr[i],maxi1(arr,n,i+1));
}
int main(){
    int arr[]={2,1,6,5,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    //maxi(arr,n,0,0);
    cout<<maxi1(arr,n,0);
}