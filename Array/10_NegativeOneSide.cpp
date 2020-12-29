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


void moveOneSide(int arr[], int len){
    int toSwitch = 0, i;

    for(i = 0; i < len; i++){
        if(arr[i] < 0){
            swap(arr[toSwitch], arr[i]);
            toSwitch ++;
        }
    }

}


int main(){
    int len, i, k;
    cout << "Length of Array : ";
    cin >> len;

    int arr[len];
    cout << "Input elements  : ";
    inputArray(arr, len);

    moveOneSide(arr, len);

    cout << "Moved Array     : ";
    printArray(arr, len);
}