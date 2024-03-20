#include<bits/stdc++.h>
using namespace std;

int minProduct(vector<int>& arr){
    int cn=0,cz=0,cp=0;
    int pp=1,pn=1,ln=INT_MIN;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<0){
            cn++;
            pn*=arr[i];
            ln=max(ln,arr[i]);
        }
        if(arr[i]==0) cz++;
        if(arr[i]>0){
            cp++;
            pp*=arr[i];
        }
    }
    if(cn==0){
        if(cz>0) return 0;
        else{
            auto it=min_element(arr.begin(),arr.end());
            return *it;
        }
    }else{
        if(cn%2==0){
            return (pn/ln)*pp;
        }
        else{
            return pn*pp;
        }

    }
}

int main(){
    vector<int> arr={-2,-3,1,4,-5,-2};
    cout<<minProduct(arr);

}
