#include<bits/stdc++.h>
using namespace std;


void inputArray(int arr[], int len){
    int i;
    for(i = 0; i < len; i++){
        cin >> arr[i];
    }
}


void findFirstLastPositions(int arr[], int len, int x, int ans[]){
    int i, count = 0;
    ans[0] = -1;
    for(i = 0; i < len; i++){
        if(arr[i] < x){
            count ++;
        }
        else if(arr[i] == x){
            count ++;
            if(ans[0] == -1){
                ans[0] = i;
            }
        }
    }

    ans[1] = count - 1;
}


int main(){
    int len, i, noOfCases, ans[2], x;
    cin >> noOfCases;

    while(noOfCases --){
        cout << "Length of Array : ";
        cin >> len;

        cout << "Value of X      : ";
        cin >> x;

        int arr[len];
        cout << "Input elements  : ";
        inputArray(arr, len);

        findFirstLastPositions(arr, len, x, ans);

        if(ans[0] == -1){
            cout << -1 << endl;
        }
        else{
            cout << ans[0] << " " << ans[1] << endl;
        }

    }
}