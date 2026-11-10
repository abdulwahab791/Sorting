#include <iostream>
using namespace std;
int main(){
    int arr[6] = {45, 78, 32, 90, 56, 65};
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5 - i; j++){
            if (arr[j] > arr[j + 1]){
               swap(arr[j],arr[j+1]);
            }
        }
        cout << "Pass " << i + 1 << ": ";
        for (int k = 0; k < 6; k++){
            cout << arr[k] << " ";
        }
        cout << endl;
    }
    cout << "Sorted Array: ";
    for (int i = 0; i < 6; i++)
        cout << arr[i] << " ";
    return 0;
}