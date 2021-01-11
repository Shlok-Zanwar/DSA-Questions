#include<bits/stdc++.h>
using namespace std;


void inputArray(int arr[], int len){
    int i;
    for(i = 0; i < len; i++){
        cin >> arr[i];
    }
}


bool subArrayExists(int arr[], int len) { 
    unordered_set<int> sumSet; 
  
    int sum = 0; 
    for (int i = 0 ; i < len ; i++) 
    { 
        sum += arr[i]; 
        if (sum == 0 || sumSet.find(sum) != sumSet.end()) 
            return true; 
  
        sumSet.insert(sum); 
    } 
    return false; 
} 


int main(){
    int len, i;
    cout << "Length of Array : ";
    cin >> len;

    int arr[len];
    cout << "Input elements  : ";
    inputArray(arr, len);

    if (subArrayExists(arr, len)){ 
        cout << "Found a subarray with 0 sum";
    } 
    else{
        cout << "No Such Sub Array Exists!"; 
    }
}