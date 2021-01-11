#include<bits/stdc++.h>
using namespace std;


void inputArray(int arr[], int len){
    int i;
    for(i = 0; i < len; i++){
        cin >> arr[i];
    }
}


int findLongestConseqSubseq(int arr[], int len){
    int hashArr[100001] = {0}, i, longestCount = 1, currCount = 0;
    for(i = 0; i < len; i ++){
        hashArr[arr[i]] ++;
    }

    for(i = 0; i < 100001; i ++){
        if(hashArr[i] == 0){
            longestCount = max(longestCount, currCount);
            currCount = 0;
        }
        else{
            currCount ++;
        }
    }

    longestCount = max(longestCount, currCount);

    return longestCount;

}


int main(){
    int len, i;
    cout << "Length of Array : ";
    cin >> len;

    int arr[len];
    cout << "Input elements  : ";
    inputArray(arr, len);

    cout << "Longest Consecutive numbers = " << findLongestConseqSubseq(arr, len);   
}