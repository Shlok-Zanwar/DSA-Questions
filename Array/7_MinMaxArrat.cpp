#include<bits/stdc++.h>
using namespace std;


void inputArray(int arr[], int len){
    int i;
    for(i = 0; i < len; i++){
        cin >> arr[i];
    }
}


void minMaxArray(int arr[], int len){
    int minimum = arr[0], maximum = arr[0], i;

    for(i = 1; i < len; i ++){
        // minimum = min(arr[i], minimum);
        // maximum = max(arr[i], maximum);

        if(arr[i] > maximum){
            maximum = arr[i];
        }
        if(arr[i] < minimum){
            minimum = arr[i];
        }
    }

    cout << "Minimum : " << minimum << endl;
    cout << "Maximum : " << maximum << endl;


}


int main(){
    int len, i;
    cout << "Length of Array : ";
    cin >> len;

    int arr[len];
    cout << "Input elements  : ";
    inputArray(arr, len);

    minMaxArray(arr, len);

}