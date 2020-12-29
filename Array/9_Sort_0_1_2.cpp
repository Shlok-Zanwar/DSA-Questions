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


void sortType(int arr[], int len){
    int noOf0 = 0, noOf1 = 0, noOf2 = 0, i;

    for(i = 0; i < len; i ++){
        if( arr[i] == 0 ){
            noOf0 ++;
        }
        else if( arr[i] == 1 ){
            noOf1 ++;
        }
        else{
            noOf2 ++;
        }
    }

    for(i = 0; i < len; i ++){
        if(noOf0 > 0){
            arr[i] = 0;
            noOf0 --;
        }
        else if(noOf1 > 0){
            arr[i] = 1;
            noOf1 --;
        }
        else{
            arr[i] = 2;
            noOf2 --;
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

    sortType(arr, len);

    cout << "Sorted Array    : ";
    printArray(arr, len);

}