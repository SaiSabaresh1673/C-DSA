#include<iostream>
#include<stack>
using namespace std;

int main(){
    int arr[]={100,80,60,81,70,60,75,85};
    int n=sizeof(arr)/sizeof(arr[0]);

    int pge[n];
    //pop, ans, push
    stack<int> st;
    pge[0]=-1;
    st.push(0);
    for(int i=1;i<n;i++){
        while(st.size()>0 && arr[st.top()]<=arr[i]) st.pop();
        
        if(st.size()==0) pge[i]=-1;
        else pge[i]=st.top();

        st.push(i);

    }
    for(int i=0;i<n;i++){
        cout<<i-pge[i]<<" ";
    }



}