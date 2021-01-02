#include<bits/stdc++.h>
using namespace std;


int length(char str1[50]){
    int len = 0;
    while(str1[len] != '\0'){
        len += 1;
    }
    return len;
}


void reverse(char str1[50]){
    char str2[50];
    int j=0;
    for (int i = length(str1)-1; i >=0 ; i--){
        str2[j] = str1[i];
        j ++ ;
    }
    str2[j] = '\0';
    cout << "Reverse of string '" << str1 << "' is '" << str2 << "'.\n";
} 


int main(){
    char str[50];
    cout << "Enter string : ";
    cin >> str;

    reverse(str);
}