#include<iostream>
using namespace std;
int main(){
    int arr[5] = {500, 200, 800, 100, 400};
    for (int i = 0; i < 4; i++){
        int minIndex = i;
        for (int j = i + 1; j < 5; j++){
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[i],arr[minIndex]);
        cout << "Pass " << i + 1 << ": ";
        for (int k = 0; k < 5; k++)
            cout << arr[k] << " ";
        cout << endl;
    }
    cout << "Lowest Price: " << arr[0] << endl;
    cout << "Highest Price: " << arr[4] << endl;
        return 0;
}
//time complexity =O(n^2)
