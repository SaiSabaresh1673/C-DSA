#include<iostream>
#include<vector>
using namespace std;
void subarray(vector<int> v,int arr[],int n,int i){
    if(i==n){
        for(int i=0;i<v.size();i++){
            cout<<v[i];
        }
        cout<<endl;
        return;
    }
    subarray(v,arr,n,i+1);
    if(v.size()==0 || arr[i-1]==v[v.size()-1]){
        v.push_back(arr[i]);
        subarray(v,arr,n,i+1);
    }
}


int main(){
    int  arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    subarray(v,arr,n,0);
}