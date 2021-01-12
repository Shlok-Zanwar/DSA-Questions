#include<bits/stdc++.h>
using namespace std;


void inputArray(int arr[], int len){
    int i;
    for(i = 0; i < len; i++){
        cin >> arr[i];
    }
}


long long maximum(long long a, long long b){
    if(a >= b){
        return a;
    }
    else{
        return b;
    }
}

long long minimum(long long a, long long b){
    if(a >= b){
        return b;
    }
    else{
        return a;
    }
}


long long maxProduct(int arr[], int len) { 
    long long minVal = arr[0]; 
    long long maxVal = arr[0]; 
  
    long long maxProduct = arr[0]; 
  
    for (int i = 1; i < len; i++) { 

        if (arr[i] < 0) 
            swap(maxVal, minVal); 
  
        maxVal = maximum(arr[i], maxVal * arr[i]); 
        minVal = minimum(arr[i], minVal * arr[i]); 
  
        maxProduct = maximum(maxProduct, maxVal); 
    }
  
    return maxProduct; 
} 


int main(){
    int len, i;
    cout << "Length of Array : ";
    cin >> len;

    int arr[len];
    cout << "Input elements  : ";
    inputArray(arr, len);

    cout << "Max Product = " << maxProduct(arr, len);
}