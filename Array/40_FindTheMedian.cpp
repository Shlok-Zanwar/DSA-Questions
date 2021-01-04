#include<bits/stdc++.h>
using namespace std;


void inputArray(int arr[], int len){
    int i;
    for(i = 0; i < len; i++){
        cin >> arr[i];
    }
}


int findMedian(int arr[], int len){
    sort(arr, arr + len);
    if(len%2 == 0){
        return ((arr[len/2] + arr[len/2 - 1])/2);
    }
    else{
        return arr[len/2];
    }
    
}


int main(){
    int len, i;
    cout << "Length of Array : ";
    cin >> len;

    int arr[len];
    cout << "Input elements  : ";
    inputArray(arr, len);

    cout << "Median is : " << findMedian(arr, len);

}