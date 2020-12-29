#include<bits/stdc++.h>
using namespace std;


void reverseArray(int arr[], int len){
    int i;
    for(i = 0; i < len/2; i ++){
        // swap(arr[i], arr[len - i - 1]);

        // Swap in O(0) space complexity
        arr[i] = arr[i] + arr[len - i - 1];
        arr[len - i - 1] = arr[i] - arr[len - 1 - i];
        arr[i] = arr[i] - arr[len - i - 1];

    }
}


void printArray(int arr[], int len){
    int i;
    for(i = 0; i < len; i++){
        cout << arr[i] << " ";
    }
}


void inputArray(int arr[], int len){
    int i;
    for(i = 0; i < len; i++){
        cin >> arr[i];
    }
}


int main(){
    int len, i;
    cout << "Length of Array : ";
    cin >> len;

    int arr[len];
    cout << "Input elements  : ";
    inputArray(arr, len);
    
    reverseArray(arr, len);
    cout << "Reversed Array  : ";
    printArray(arr, len);

}