#include<bits/stdc++.h>
using namespace std;


string consecutiveElements(string str){
    string modified = "";
    int i;

    modified = str[0];
    for(i = 1; i < str.length(); i ++){
        if(str[i] == modified.back()){
            continue;
        }
        else{
            modified.push_back(str[i]);
        }
    }

    return modified;
}


int main(){
    string str;
    cout << "Enter the string : ";
    cin >> str;

    cout << "Modified string : " << consecutiveElements(str);

}