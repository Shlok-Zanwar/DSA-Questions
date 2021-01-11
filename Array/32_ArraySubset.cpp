#include<bits/stdc++.h>
using namespace std;


void inputArray(int arr[], int len){
    int i;
    for(i = 0; i < len; i++){
        cin >> arr[i];
    }
}


bool isArraySubset(int mainArr[], int mainLen, int checkArr[], int checkLen){
    sort(mainArr, mainArr + mainLen);
    sort(checkArr, checkArr + checkLen);

    int checkItr = 0, mainItr = 0;

    while(mainItr < mainLen && checkItr < checkLen){
        if(mainArr[mainItr] == checkArr[checkItr]){
            checkItr ++;
            mainItr ++;
        }
        else if(mainArr[mainItr] < checkArr[checkItr]){
            mainItr ++;
        }
        else{
            return false;
        }
    }

    if(checkItr != checkLen){
        return false;
    }

    return true;
}


int main(){
    int mainLen, i, checkLen;
    cout << "Length of Array : ";
    cin >> mainLen;

    int mainArr[mainLen];
    cout << "Input array elements  : ";
    inputArray(mainArr, mainLen);

    cout << "Length of Subset Array : ";
    cin >> checkLen;

    int checkArr[checkLen];
    cout << "Input subset elements  : ";
    inputArray(checkArr, checkLen);
    
    cout << "IS Valid Subset ? = ";
    if(isArraySubset(mainArr, mainLen, checkArr, checkLen)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

}