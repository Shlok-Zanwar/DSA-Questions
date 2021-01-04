#include<bits/stdc++.h>
using namespace std;


void inputArray(int arr[], int len){
    int i;
    for(i = 0; i < len; i++){
        cin >> arr[i];
    }
}


bool checkStringPalindrome(string str){
    int i, strLength = str.length();
    for(i = 0; i < strLength/2; i++){
        if(str[i] != str[strLength-i-1]){
            return false;
        }
    }
    return true;
}


int main(){
    int noOfCases, len, i;
    cout << "Enter no of Cases : ";
    cin >> noOfCases;

    while(noOfCases --){
        cout << "Length of Array : ";
        cin >> len;
    
        int arr[len];
        cout << "Input elements  : ";
        inputArray(arr, len);

        for(i = 0; i < len; i ++){
            if( !checkStringPalindrome( to_string(arr[i]) ) ){
                cout << "0" << endl;
                break;
            }
        }

        if(i == len){
            cout << "1" << endl;
        }

    }

}