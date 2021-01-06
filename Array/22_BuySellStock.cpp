#include<bits/stdc++.h>
using namespace std;


int buySellStock(int arr[], int len){
    int minPrice = 2147483647, profit = 0, i;

    for (i = 0; i < len; i++) {
        if (arr[i] < minPrice)
            minPrice = arr[i];
        else if (arr[i] - minPrice > profit)
            profit = arr[i] - minPrice;
    }

    return profit;
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

    cout << "Maximum Profit : " << buySellStock(arr, len) << endl; 
}