#include<iostream>
using namespace std;

int main(){
    int arr[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    int max=arr[0][0];
    for(int i=1;i<3;i++){
        for(int j=1;j<3;j++){
            if(max<arr[i][j]){
                max=arr[i][j];
            }
        }
    }

    cout<<max;
}