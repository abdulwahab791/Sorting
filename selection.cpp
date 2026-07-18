#include<iostream>
using namespace std;
void selection(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int smallidx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallidx]){
                smallidx=j;
            }
        }
        swap(arr[i],arr[smallidx]);
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
    selection(arr,5);
    printarr(arr,5);
}
//time complexity =O(n^2)
