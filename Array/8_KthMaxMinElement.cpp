#include<bits/stdc++.h>
using namespace std;


void inputArray(int arr[], int len){
    int i;
    for(i = 0; i < len; i++){
        cin >> arr[i];
    }
}


void kthMinMaxArray(int arr[], int len, int k){
    sort(arr, arr + len);

    cout << "Minimum " << k << "th : " << arr[k - 1] << endl;
    cout << "Maximum " << k << "th : " << arr[len - k]  << endl;
}


int main(){
    int len, i, k;
    cout << "Length of Array : ";
    cin >> len;

    int arr[len];
    cout << "Input elements  : ";
    inputArray(arr, len);

    cout << "Value of k : ";
    cin >> k; 

    kthMinMaxArray(arr, len, k);

}