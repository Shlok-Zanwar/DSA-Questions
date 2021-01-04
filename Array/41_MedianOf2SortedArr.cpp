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


void mergeArray(int arr1[], int arr2[], int len1, int len2, int mergedArr[], int mergedLen){
    int i = 0, j = 0, index = 0;

    while(i != len1 || j != len2){
        if(arr1[i] <= arr2[j]){
            mergedArr[index] = arr1[i];
            index ++;
            i ++;
        }
        else{
            mergedArr[index] = arr2[j];
            index ++;
            j ++;
        }
    }

    while(i < len1){
        mergedArr[index] = arr1[i];
            index ++;
        i ++;
    }

    while(j < len2){
        mergedArr[index] = arr2[j];
        index ++;
        j ++;
    }

    cout << endl;
}


int findMedian(int mergedArr[], int mergedLen){

    if(mergedLen%2 == 0){
        return ((mergedArr[mergedLen/2] + mergedArr[mergedLen/2 - 1])/2);
    }
    else{
        return mergedArr[mergedLen/2];
    }
    
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
    mergeArray(arr1, arr2, len1, len2, mergedArr, len1 + len2);

    cout << "Median is : " << findMedian(mergedArr, len1 + len2);

}