#include <bits/stdc++.h>
using namespace std;
typedef long long ll;





int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    stack<char> stk;
    string str;

    cout << "Input : ";
    cin >> str;

    int i, len = str.length();

    for(i = 0 ; i < len; i ++){
        stk.push(str[i]);
    }

    cout << "Reverse : ";
    for(i = 0 ; i < len; i ++){
        cout << stk.top();
        stk.pop();
    }

    stk.


}
