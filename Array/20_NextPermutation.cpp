#include<bits/stdc++.h>
using namespace std;


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


void nextPermutation(int arr[], int len){
    int i = len - 2;
    while (i >= 0 && arr[i + 1] <= arr[i]) {
        i--;
    }
    if (i >= 0) {
        int j = len;
        while (j >= 0 && arr[j] <= arr[i]) {
            j--;
        }
        swap(arr[i], arr[j]);
    }
    reverse(arr + i+1, arr + len);

}


int main(){
    int len, i;
    cout << "Length of Array : ";
    cin >> len;

    int arr[len];
    cout << "Input elements  : ";
    inputArray(arr, len);
    
    nextPermutation(arr, len);
    
    cout << "Next Permutation : ";
    printArray(arr, len);

}