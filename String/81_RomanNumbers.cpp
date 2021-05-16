// Program to convert Roman
// Numerals to Numbers
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



ll decimal(char r){
    if (r == 'I'){
        return 1;
    }
    if (r == 'V'){
        return 5;
    }
    if (r == 'X'){
        return 10;
    }
    if (r == 'L'){
        return 50;
    }
    if (r == 'C'){
        return 100;
    }
    if (r == 'D'){
        return 500;
    }
    if (r == 'M'){
        return 1000;
    }
    return -1;
}

ll romanToDecimal(string& str){
    ll res = 0, i, num1, num2;
    for (i = 0; i < str.length(); i ++) {
        num1 = decimal(str[i]);

        if (i + 1 < str.length()){
            num2 = decimal(str[i + 1]);

            if (num1 >= num2){
                res = res + num1;
            }
            else{
                res = res + num2 - num1;
                i++;
            }
        }
        else{
            res = res + num1;
        }
    }
    return res;
}

int main(){

    ll cases, i, j, len;
    string str;
    cout << "cases : ";
    cin >> cases;
    
    while (cases --){
        cin >> str;
        cout << romanToDecimal(str) << "\n";
    }

}
