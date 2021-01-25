#include<bits/stdc++.h>
using namespace std;


void printArray(vector<int> arr, int len){
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


vector<int> valueEqualToIndex(int arr[], int n) {
    vector <int> toReturn;
    for(int i = 0; i < n; i++){
        if(arr[i] == i+1){
            toReturn.push_back(i+1);
        }
    }
    
    return toReturn;
}


int main(){
    int len, i;
    cout << "Length of Array : ";
    cin >> len;

    int arr[len];
    cout << "Input elements  : ";
    inputArray(arr, len);
    
    vector<int> ans = valueEqualToIndex(arr, len);
    printArray(ans, ans.size());
}