#include<bits/stdc++.h>
using namespace std;


void inputArray(int arr[], int len){
    int i;
    for(i = 0; i < len; i++){
        cin >> arr[i];
    }
}


int getPairsCount(int arr[], int len, int k){
    int mapArr[k] = {0}, i, pairCount = 0;

    for(i = 0; i < len; i ++){
        if(arr[i] < k){
            mapArr[arr[i]] ++;
        }
    }

    cout << endl;
    for(i = 1; i < k; i ++){
        cout << mapArr[i] << " ";
    }
    cout << endl;

    
    for(i = 1; i < k/2; i ++){
        pairCount += mapArr[i]*mapArr[k - i];
        // cout << i << " " << pairCount << endl;
    }

    if(len%2 == 1){
        if(mapArr[k/2] != 0){
            pairCount = pairCount + mapArr[k/2] - 1;
        }
    }
    else{
        pairCount += mapArr[k/2]*mapArr[k/2 + 1];
    }

    

    return pairCount;
}


int main(){
    int len, i;
    cout << "Length of Array : ";
    cin >> len;

    int arr[len];
    cout << "Input elements  : ";
    inputArray(arr, len);

    int k;
    cout << "Enter Sum : ";
    cin >> k;

    cout << "Pairs = " << getPairsCount(arr, len, k) << endl;

}
