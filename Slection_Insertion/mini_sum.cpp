#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

int main(){
    int arr[]={5,1,5,5,2,3};
    int n=6;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=1;i<=n-1;i++){
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    int x=0;
    for(int i=0;i<n;i++){
        x*=10;
        x+=arr[i];
    }
    for(int i=n-1;i>0;i--){
        if(arr[i]!=arr[i-1]){
            swap(arr[i],arr[i-1]);
            break;
        }
    }
    int y=0;
    for(int i=0;i<n;i++){
        y*=10;
        y+=arr[i];
    }
    cout<<x+y;

}