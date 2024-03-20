#include<iostream>
#include<vector>
using namespace std;
void printsubset(int arr[],int n,int i,vector<int> ans,int k){
    if(i==n){
        if(ans.size()==k){
            for(int i=0;i<ans.size();i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }    
        return;
    }
    printsubset(arr,n,i+1,ans,k);
    ans.push_back(arr[i]);
    printsubset(arr,n,i+1,ans,k);


}

int main(){
    int  arr[]={1,2,3,4,5};
    int k=3;
    vector<int> v;
    int n=sizeof(arr)/sizeof(arr[0]);
    printsubset(arr,n,0,v,k);
}