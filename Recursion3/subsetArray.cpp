#include<iostream>
#include<vector>
using namespace std;
void printsubset(int arr[],int n,int i,vector<int> ans){
    if(i==n){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }
    printsubset(arr,n,i+1,ans);
    ans.push_back(arr[i]);
    printsubset(arr,n,i+1,ans);


}

int main(){
    int  arr[]={1,2,3};
    vector<int> v;
    int n=sizeof(arr)/sizeof(arr[0]);
    printsubset(arr,n,0,v);
}