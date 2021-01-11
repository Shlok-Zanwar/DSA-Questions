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


void rotateRigth(int arr[], int len, int start, int end){
    int i, last = arr[end];
    for(i = end - 1; i >= start; i --){
        arr[i + 1] = arr[i];
    }
    arr[start] = last;
}


void rearrangeArr(int arr[], int len){
    int i, wrong = -1, j;
    for(i = 0; i < len; i ++){

        if(i%2 == 0){
            if(arr[i] >= 0){
                for(j = i + 1; j < len; j ++){
                    if(arr[j] < 0){
                        rotateRigth(arr, len, i, j);
                        i ++;
                        break;
                    }
                }
                if(j == len){
                    break;
                }
            }
        }
        else{
            if(arr[i] < 0){
                for(j = i + 1; j < len; j ++){
                    if(arr[j] > 0){
                        rotateRigth(arr, len, i, j);
                        i ++;
                        break;
                    }
                }
                if(j == len){
                    break;
                }
            }
        }

    }
}


int main(){
    int len, i;
    cout << "Length of Array : ";
    cin >> len;

    int arr[len];
    cout << "Input elements  : ";
    inputArray(arr, len);

    // rotateRigth(arr, len, 1, 4);
    

    rearrangeArr(arr, len);
    cout << "Modified Array = ";
    printArray(arr, len);

}