#include<bits/stdc++.h>
using namespace std;


void inputArray(int arr[], int len){
    int i;
    for(i = 0; i < len; i++){
        cin >> arr[i];
    }
}


int findNumberOfElements(int arr[], int len, int k){
    int hashArr[100001] = {0}, i, appearCount = 0, greaterThan =  len/k;

    for(i = 0; i < len; i ++){
        hashArr[arr[i]] ++;
    }

    for(i = 0; i < 100001; i ++){
        if(hashArr[i] > greaterThan){
            appearCount ++;
        }
    }

    return appearCount;
}


int main(){
    int len, i, k;
    cout << "Length of Array : ";
    cin >> len;

    int arr[len];
    cout << "Input elements  : ";
    inputArray(arr, len);
    
    cout << "Enter k : ";
    cin >> k;

    cout << "Count = " << findNumberOfElements(arr, len, k);
}