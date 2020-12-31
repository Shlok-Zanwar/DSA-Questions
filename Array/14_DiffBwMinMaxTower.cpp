#include<bits/stdc++.h>
using namespace std;


void inputArray(int arr[], int len){
    int i;
    for(i = 0; i < len; i++){
        cin >> arr[i];
    }
}


int minimizeTheHeights(int arr[], int len, int k){
    if (len == 1){
       return 0;
    }

    sort(arr, arr+len);
  
    int ans = arr[len-1] - arr[0]; 

    int small = arr[0] + k; 
    int big = arr[len-1] - k; 
    if (small > big){
       swap(small, big);
    } 
  
    for (int i = 1; i < len-1; i ++) 
    { 
        int subtract = arr[i] - k; 
        int add = arr[i] + k; 

        if (subtract >= small || add <= big) 
            continue; 
  
        if (big - subtract <= add - small){
            small = subtract; 
        }
        else{
            big = add; 
        }
    } 
  
    return  min(ans, big - small); 
    
}


int main(){
    int len, i, k;
    cout << "Length of Array : ";
    cin >> len;

    int arr[len];
    cout << "Input elements  : ";
    inputArray(arr, len);
    cout << "Enter k         : ";
    cin >> k;

    cout << "Max sum of subarray is : " << minimizeTheHeights(arr, len, k);



}