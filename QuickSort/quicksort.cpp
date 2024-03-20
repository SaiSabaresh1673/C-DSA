#include<iostream>
using namespace std;

int partition(int arr[],int si,int ei){
    int count=0;
    int pivotEle = arr[(si+ei)/2];
    for(int i=si;i<=ei;i++){
        if(i==(si+ei)/2) continue;
        if(arr[i]<=pivotEle) count++;
    }
    int pivInd=count+si;
    swap(arr[(si+ei)/2],arr[pivInd]);
    int i=si;
    int j=ei;
    while(i<pivInd && j>pivInd){
        if(arr[i]<=pivotEle) i++;
        if(arr[j]>pivotEle) j--;
        else if(arr[i]>pivotEle && arr[j]<=pivotEle){
            swap(arr[i],arr[j]);
            i++;
            j--;
        } 
    }
    return pivInd;
}

void quicksort(int arr[],int si,int ei){
    if(si>=ei) return;

    int pi=partition(arr,si,ei);

    quicksort(arr,si,pi-1);
    quicksort(arr,pi+1,ei);
}
int main(){
    int arr[]={5,1,8,2,7,6,5,3,4};
    int n= sizeof(arr)/sizeof(arr[0]); 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } 
    cout<<endl;
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } 
}