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


int minimumNoOfJumps(int arr[], int len){
    int i = 0, maxJumpsIndex, maxJumps = 0, j, totalJumps = 0, jumpsLeft;


    while (i < len-1){
        jumpsLeft = arr[i] - 1;
        
        if(arr[i] + i >= len - 1){
            totalJumps ++;
            break;
        }

        for(j = i + 1; j <= i + arr[i] ; j ++){
            if(arr[j] - jumpsLeft >= maxJumps ){
                maxJumpsIndex = j;
                maxJumps = arr[i] - jumpsLeft;
            }
            jumpsLeft --;
        }
        totalJumps ++;
        i = maxJumpsIndex;
    }

    return totalJumps;
}


int minJumps(int arr[], int len){
    int i = 0, curr, maxReach = arr[i], nextMax = 0, nextI, noOfJumps = 0;

    
    while(i < len-1){
        if(i + arr[i] >= len - 1){
            return noOfJumps + 1;
        }
        curr = i;
        nextMax = 0;
        for(curr = 1; curr <= arr[i]; curr ++){

            if(nextMax < (arr[curr + i] - (arr[i] - curr)) ){
                nextMax = (arr[curr + i] - (arr[i] - curr));
                nextI = curr + i;
            }
        }
        cout << nextI << endl;
        if(nextI == i){
            return -1;
        }
        i = nextI;
        noOfJumps ++;
    }

    return noOfJumps;
}

int main(){
    int len, i;
    cout << "Length of Array : ";
    cin >> len;

    int arr[len];
    cout << "Input elements  : ";
    inputArray(arr, len);
    
    cout << "Min Jumps : " << minJumps(arr, len);
}