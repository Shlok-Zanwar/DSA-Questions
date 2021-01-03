#include<bits/stdc++.h>
using namespace std;


void printDuplicate(string str){
    cout << "Duplicate Charecters :- " << endl;

    int charCount[26] = {0}, i;

    for(i = 0; i < str.length(); i ++){
        if(str[i] != ' '){
            charCount[(int)str[i] - 97] ++;
        }
        
    }

    for(i = 0; i < 26; i ++){
        if(charCount[i] > 1){
            cout << (char)(i + 97) << ", count = " << charCount[i] << endl;
        }
    }

}


int main(){
    string str;
    cout << "Enter string : ";
    getline(cin, str);

    printDuplicate(str);
}