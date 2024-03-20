#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

int main(){
    int arr[8]={10,7,6,5,3,0,-2,-4};
    int n=8;
    int x=0;
    int lo=0;
    int hi=n-1;
    bool flag=false;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==x){
            flag=true;
            cout<<mid;
            break;
        }else if(arr[mid]>x) lo=mid+1;
        else hi=mid-1;
    }
    if(flag==false) cout<<"not exists";
}