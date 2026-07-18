#include<iostream>
using namespace std;
void bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void fromuser(int arr[],int n){
    cout<<"enter array value"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[5];
    fromuser(arr,5);
    bubblesort(arr,5);
    printarr(arr,5);
}
//time comlexity = O(n^2)