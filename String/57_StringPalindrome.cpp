#include<bits/stdc++.h>
using namespace std;


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
    char str[50];
    cout << "Enter string : ";
    cin >> str;

    if(checkStringPalindrome(str)){
        cout << "1" << endl;
    }
    else{
        cout << "0" << endl;
    }
}