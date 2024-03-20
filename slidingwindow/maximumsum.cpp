#include<iostream>
#include<algorithm>
#include<limits.h>
using namespace std;

int main(){
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    int maxi=INT_MIN;
    int mIdx=0;
    int prevSum=0;
    for(int i=0;i<k;i++){
        prevSum+=arr[i];
    }
    maxi=prevSum;
    int i=1;
    int j=k;
    while(j<n){
        int currSum=prevSum+arr[j]-arr[i-1];
        if(maxi<currSum){
            maxi=currSum;
            mIdx=i;
        }
        prevSum=currSum;
        i++;
        j++;
    }
    cout<<maxi<<endl;
    cout<<mIdx;

}