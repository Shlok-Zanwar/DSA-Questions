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


void printMergeArray(int arr1[], int arr2[], int len1, int len2){
    // sort(arr1, arr1 + len1);
    // sort(arr2, arr2 + len2);

    int i = 0, j = 0;
    cout << "Merged Array : " ;

    while(i != len1 || j != len2){
        if(arr1[i] <= arr2[j]){
            cout << arr1[i] << " ";
            i ++;
        }
        else{
            cout << arr2[j] << " ";
            j ++;
        }
    }

    while(i < len1){
        cout << arr1[i] << " ";
        i ++;
    }

    while(j < len2){
        cout << arr2[j] << " ";
            j ++;
    }

    cout << endl;

}


int main(){
    int len1, len2;
    cout << "Length of Array 1 : ";
    cin >> len1;

    int arr1[len1];
    cout << "Input elements of 1 : ";
    inputArray(arr1, len1);

    cout << "Length of Array 2 : ";
    cin >> len2;

    int arr2[len2];
    cout << "Input elements of 2 : ";
    inputArray(arr2, len2);

    printMergeArray(arr1, arr2, len1, len2);
    
}