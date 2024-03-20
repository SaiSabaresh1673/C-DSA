#include<iostream>
using namespace std;
int main(){
    int arr[13]={0,0,0,0,0,1,1,1,1,1,1,1,1};
    int n=13,x=1;
    int lo=0;
    int hi=n-1;
    int mid,fc,ans;
    while(lo<=hi){
        mid=lo+(hi-lo)/2;
        if(arr[mid]==x){
            if(arr[mid-1]!=x){
                fc=mid;
                break;
            }else{
                hi=mid-1;
            }
        }
        else if(arr[mid]>x) hi=mid+1;
        else if(arr[mid]<x) lo=mid+1;
    }
    ans= n-fc;
    cout<<ans;
}