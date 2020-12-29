#include<bits/stdc++.h>
using namespace std;


void inputArray(int arr[], int len){
    int i;
    for(i = 0; i < len; i++){
        cin >> arr[i];
    }
}


void printUnionIntersection(int arr1[], int len1, int arr2[], int len2){
    int i = 0, j = 0, unionLen = 0;
    cout << "Union : ";
    while(i < len1 && j < len2){
        if(arr1[i] == arr2[j]){
            cout << arr1[i] << " ";
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j]){
            cout << arr1[i] << " ";
            i++;
        }
        else if(arr1[i] > arr2[j]){
            cout << arr2[j] << " ";
            j++;
        }
    }

    for(i; i < len1; i++){
        cout << arr1[i] << " ";
    }

    for(j; j < len2; j++){
        cout << arr2[j] << " ";
    }
    cout << endl;


    i = 0;
    j = 0;
    cout << "Intersection : ";
    while(i < len1 && j < len2){
        if(arr1[i] == arr2[j]){
            cout << arr1[i] << " ";
            i++;
            j++;
            unionLen ++;
        }
        else if(arr1[i] < arr2[j]){
            i++;
        }
        else if(arr1[i] > arr2[j]){
            j++;
        }
    }

    if(unionLen == 0){
        cout << "null";
    }
    cout << endl;

}


int main(){
    int len1, len2, i, k;
    cout << "Length of Array 1 : ";
    cin >> len1;
    cout << "Length of Array 2 : ";
    cin >> len2;

    int arr1[len1], arr2[len2];
    cout << "Input array 1 : ";
    inputArray(arr1, len1);
    cout << "Input array 2 : ";
    inputArray(arr2, len2);

    printUnionIntersection(arr1, len1, arr2, len2);


}