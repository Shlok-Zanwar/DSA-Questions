#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool solve(string str){
    ll i;
    stack<char> stk;

    for(i = 0; i < str.length(); i ++){
        if(str[i] == '{' || str[i] == '(' || str[i] == '['){
            stk.push(str[i]);
        }
        else{
            if (stk.empty()){
                return false;
            }

            if (str[i] == '}'){
                if(stk.top() != '{'){
                    return false;
                }
                stk.pop();
            }
            else if (str[i] == ')'){
                if(stk.top() != '('){
                    return false;
                }
                stk.pop();
            }
            else if (str[i] == ']'){
                if(stk.top() != '['){
                    return false;
                }
                stk.pop();
            }
        }
    }
    
    if(!stk.empty()){
        return false;
    }
    return true;
}


int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long noOfCases; 
    bool ans;
    cin >> noOfCases; 
    string str;

    while( noOfCases --) {
        cin >> str;
        ans = solve(str);
        cout << ans << endl;
    }
}
