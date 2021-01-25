#include<bits/stdc++.h>
using namespace std;


void inputArray(int arr[], int len){
    int i;
    for(i = 0; i < len; i++){
        cin >> arr[i];
    }
}


int rotatedSearch(int nums[], int target, int len) {
    int i;
    if(target > nums[0]){
        for(i = 1; i < len; i++){
            if(target == nums[i]){
                return i;
            }
            else if(target < nums[i]){
                return -1;
            }
        }
        return -1;
    }
    else if(target < nums[0]){
        for(i = len - 1; i > 0; i--){
            if(target == nums[i]){
                return i;
            }
            else if(target > nums[i]){
                return -1;
            }
        }
        return -1;
    }
    else{
        return 0;
    }
}


int main(){
    int len, i, target;
    cout << "Length of Array : ";
    cin >> len;

    cout << "Target : ";
    cin >> target;

    int arr[len];
    cout << "Input elements  : ";
    inputArray(arr, len);

    cout << "Index is = " << rotatedSearch(arr, target, len);

}