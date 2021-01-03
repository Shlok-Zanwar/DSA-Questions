#include<bits/stdc++.h>
using namespace std;

// Note: The program gets confused if the initial letters of two strings match. For example, if ab12 and abb34 are two strings, then abbab1234 is a valid shuffle.
// However, the program will treat the first two letters ab as part of the first string. Due to this, the third letter b doesn't match with both the third letter of the first string (1) and the first letter of the second string (a).

bool checkValidShuffle(string str1, string str2, string result){
    int i = 0, s1= 0, s2 = 0;
    if(str1.length() + str2.length() != result.length()){
        return false;
    }

    while(i != result.length()){
        if(str1[s1] == result[i]){
            s1 ++;
        }
        else if(str2[s2] == result[i]){
            s2 ++;
        }
        else{
            return false;
        }

        i ++;
    }

    return true;
}



int main(){
    string str1, str2, result;
    cout << "Enter string 1 : ";
    cin >> str1;
    cout << "Enter string 2 : ";
    cin >> str2;
    cout << "Enter result string : ";
    cin >> result;

    if(checkValidShuffle(str1, str2, result)){
        cout << "1" << endl;
    }
    else{
        cout << "0" << endl;
    }
}