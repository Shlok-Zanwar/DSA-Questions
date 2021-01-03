#include<bits/stdc++.h>
using namespace std;


bool checkStringRotations(string str1, string str2){
    int i, j;
    string check;
    if(str1.length() != str2.length()){
        return false;
    }

    check = str1 + str1;

    for(i = 0; i < str1.length(); i ++){
        if(check[i] == str2[0]){
            for(j = 1; j < str2.length(); j ++){
                if(check[i + j] != str2[j]){
                    break;
                }
            }
            if(j == str2.length()){
                return true;
            }
        }
    }
    
    return false;
    // or function; 
    return (check.find(str2) != string::npos);
}


int main(){
    string str1, str2;
    cout << "Enter string 1 : ";
    cin >> str1;
    cout << "Enter string 2 : ";
    cin >> str2;

    if(checkStringRotations(str1, str2)){
        cout << "1" << endl;
    }
    else{
        cout << "0" << endl;
    }
}