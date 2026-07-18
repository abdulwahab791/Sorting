#include<iostream>
using namespace std;
void insertion(int arr[],int n){
    for(int i=0;i<n;i++){
        int curr=arr[i];
        int prev=i-1;
        while(prev<= 5 && arr[prev]<curr){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1] = curr;
    }
}
void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[]={4,1,5,2,3};  
    insertion(arr,5);
    printarr(arr,5);
}
//time complexity =O(n^2)
