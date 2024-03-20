#include<iostream>
#include<string>
using namespace std;

int main(){
    string arr[]={"0012","0130","00139","2910","00100"};
    int max=stoi(arr[0]);
    int maxs=stoi(arr[0]);
    for(int i=0;i<5;i++){
        int x=stoi(arr[i]);
        if(x>max){
            max=x;
            maxs=i;
        }
    }
    cout<<max<<" "<<maxs;
}