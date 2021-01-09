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


void mergeArray(int arr1[], int arr2[], int len1, int len2){
    int i = len1 - 1;
    int j = 0;
    
    while(true){
        if(i == -1 || j == len2){
            break;
        }
        
        if(arr1[i] > arr2[j]){
            swap(arr1[i], arr2[j]);
        }
        i --;
        j ++;
    }
    
    sort(arr1, arr1 + len1);
    sort(arr2, arr2 + len2);
	    
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

    int mergedArr[len1 + len2];
    mergeArray(arr1, arr2, len1, len2);

    cout << "Merged Array : " ;
    printArray(arr1, len1);
    printArray(arr2, len2);

}