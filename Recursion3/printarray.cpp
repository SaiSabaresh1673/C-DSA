#include<iostream>
#include<vector>
using namespace std;

void display(int arr[],int n,int i){
    if(i==n) return;
    cout<<arr[i]<<" ";
    display(arr,n,i+1);
    
}
void display2(vector<int>& v,int i){
    if(i==v.size()) return;
    cout<<v[i]<<" ";
    display2(v,i+1);
    
}
int main(){
    int arr[]={2,1,6,5,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v(n);
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }
    //display(arr,n,0);
    display2(v,0);
}