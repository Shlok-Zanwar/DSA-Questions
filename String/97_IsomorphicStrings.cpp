#include<bits/stdc++.h>
using namespace std;


bool areIsomorphic(string str1, string str2){
    char arr[26];
    char usedWith[26];
    int i;

    if(str1.length() != str2.length()){
        return false;
    }

    for(i = 0; i < 26; i++){
        arr[i] = '-';
        usedWith[i] = '-';
    }

    for(i = 0; i < str1.length(); i ++){

        

        if( arr[(int)str1[i] - 97] == '-'){
            if(usedWith[(int)str2[i] - 97] == '-' || usedWith[(int)str2[i] - 97] == str1[i]){
                arr[(int)str1[i] - 97] = str2[i];
                usedWith[(int)str2[i] - 97] = str1[i];
            }
            else{
                return false;
            }
            
        }
        else if(arr[(int)str1[i] - 97] != str2[i]){
            return false;
        }
    }

    return true;
}


int main(){
    string str1, str2;
    cout << "Enter string 1 : ";
    cin >> str1;
    cout << "Enter string 2 : ";
    cin >> str2;

    if(areIsomorphic(str1, str2)){
        cout << "1" << endl;
    }
    else{
        cout << "0" << endl;
    }
}