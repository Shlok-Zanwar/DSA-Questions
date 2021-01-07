#include<bits/stdc++.h>
using namespace std;


void inputArray(int arr[], int len){
    int i;
    for(i = 0; i < len; i++){
        cin >> arr[i];
    }
}


int minimumDifference(int arr[], int len, int noOfStudents){
    sort(arr, arr + len);

    int i, minDiff = arr[len - 1];
    for(i = 0; i <= len - noOfStudents; i ++){
        minDiff = min((arr[i + noOfStudents - 1] - arr[i]) , minDiff);
    }

    return minDiff;
}


int main(){
    int len, i;
    cout << "Length of Array : ";
    cin >> len;

    int arr[len];
    cout << "Input elements  : ";
    inputArray(arr, len);

    int noOfStudents;
    cout << "Enter no of students : ";
    cin >> noOfStudents;
    
    cout << "Minimum difference : " << minimumDifference(arr, len, noOfStudents) << endl;

}