#include<bits/stdc++.h>
using namespace std;


int countInversion(int arr[], int len){
    int countInv = 0, i, j;
    for(i = 0; i < len - 1; i ++){
        for(j = i + 1; j < len; j ++){
            if(arr[i] > arr[j]){
                countInv ++;
            }
        }
    }

    return countInv;
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

    cout << "Count Inversion : " << countInversion(arr, len) << endl; 
}