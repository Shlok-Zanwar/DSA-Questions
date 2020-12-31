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


int maxiMumSumArray(int arr[], int len){
    int maxSum = arr[0], currSum = arr[0], i;

    for(i = 1; i < len; i ++){
        if(currSum <= 0){
            currSum = arr[i];
        }
        else{
            currSum += arr[i];
        }

        maxSum = max(maxSum, currSum);

    }

    return maxSum;

}


int main(){
    int len, i;
    cout << "Length of Array : ";
    cin >> len;

    int arr[len];
    cout << "Input elements  : ";
    inputArray(arr, len);

    cout << "Max sum of subarray is : " << maxiMumSumArray(arr, len);



}