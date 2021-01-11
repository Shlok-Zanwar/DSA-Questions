#include<bits/stdc++.h>
using namespace std;


void printVector(vector <int> commonElements){
    int i;
    for(i = 0; i < commonElements.size(); i++){
        cout << commonElements[i] << " ";
    }
}


void inputArray(int arr[], int len){
    int i;
    for(i = 0; i < len; i++){
        cin >> arr[i];
    }
}


vector <int> findCommonElements(int arr1[], int arr2[], int arr3[], int len1, int len2, int len3){
    int i = 0, j = 0, k = 0, highest;
    vector <int> commonElements;
    // cout << endl;
    while(i < len1 && j < len2 && k < len3){
        
        // cout << i << " " << j << " " << k << endl;

        if(arr1[i] == arr2[j] && arr2[j] == arr3[k]){
            if(commonElements.size() > 0){
                if(commonElements[commonElements.size() - 1] != arr1[i]){
                    commonElements.push_back(arr1[i]);
                }
            }
            else{
                commonElements.push_back(arr1[i]);
            }
            i ++;
            j ++;
            k ++;
        }
        else if(arr1[i] < arr2[j]){
            i ++;
        }
        else if(arr2[j] < arr3[k]){
            j ++;
        }
        else{
            k ++;
        }
    }

    return commonElements;

}


int main(){
    int len1, len2, len3, i;
    cout << "Length of Array 1 : ";
    cin >> len1;

    int arr1[len1];
    cout << "Input elements 1 : ";
    inputArray(arr1, len1);

    cout << "Length of Array 2 : ";
    cin >> len2;

    int arr2[len2];
    cout << "Input elements 2 : ";
    inputArray(arr2, len2);

    cout << "Length of Array 3 : ";
    cin >> len3;

    int arr3[len3];
    cout << "Input elements 3 : ";
    inputArray(arr3, len3);

    vector <int> commonElements = findCommonElements(arr1, arr2, arr3, len1, len2, len3);
    cout << "Common Elements : ";
    printVector(commonElements);
}