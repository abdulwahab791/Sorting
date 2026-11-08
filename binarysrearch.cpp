#include<iostream>
using namespace std;
int binary_search(int arr[],int n,int target ){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(target > arr[mid]){
            start=mid+1;
        }
        else if(target < arr[mid]){
            end=mid-1;
        }
        else if(target ==arr[mid]){
            return mid;
        }
    }
    return -1;
}
int main(){
    int arr[]={10,22,33,54,65};
    cout<<binary_search(arr,5,6);
    return 0;
}