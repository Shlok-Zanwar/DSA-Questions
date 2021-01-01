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


int duplicateNumber(int arr[], int len){
    int i;

    // Time complexity (NlogN) space O(1 / N) 

    sort(arr, arr+len);

    for(i = 0; i < len - 1; i ++){
        if(arr[i] = arr[i+1]){
            return arr[i];
        }   
    }

    // Or Time complexity O(N) space O(N) 

    int store[len] = {0};
    for(i = 0; i < len; i ++){
        if(store[arr[i] - 1] == 1){
            return arr[i];
        }

        store[arr[i] - 1] ++;        

    }

    // Or Time Complexity O(N) space O(2)

    int next = arr[0], storeNext = arr[0];
    arr[0] = 0;

    while(true){

        if(arr[next] == 0){
            return next;
        }
        storeNext = arr[next];
        arr[next] = 0;
        
        next = storeNext;
    }

}


int main(){
    int len, i;
    cout << "Length of Array : ";
    cin >> len;

    int arr[len];
    cout << "Input elements  : ";
    inputArray(arr, len);
    
    cout << "Duplicate Number : " << duplicateNumber(arr, len);
}