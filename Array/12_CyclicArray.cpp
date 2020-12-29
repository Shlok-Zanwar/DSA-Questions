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

void cycleArray(int arr[], int len){
    int i, store = arr[len -1];
    for(i = len - 2; i >= 0; i--){
        arr[i+1] = arr[i];
    }
    arr[0] = store;
}


int main(){
    int len, i;
    cout << "Length of Array : ";
    cin >> len;

    int arr[len];
    cout << "Input elements  : ";
    inputArray(arr, len);
    
    cycleArray(arr, len);
    cout << "Cyclic Array  : ";
    printArray(arr, len);

}