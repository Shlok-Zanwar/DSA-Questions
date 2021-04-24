// Write a function canConstruct(target, wordBank) that accepts a target string and an array of strings.
// The function should return a boolean indicating whether or not the "target" can be constructed by concatenating elements of the "wordBank" array.
// You may reuse elements of wordBank as many times as needed.


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


string makeSubStr(string str, ll start, ll end){
    string ans = "";
    for(ll i = start; i < end; i ++){
        ans += str[i];
    }

    return ans;
}


map<string, ll> memo;


bool canConstruct(string target, string arr[], ll len){
    if(target.length() == 0){
        return true;
    }

    if(memo[target] == 1){
        return false;
    }
    else if(memo[target] == 2){
        return true;
    }

    ll i = 0;
    for(i = 0; i < len; i ++){
        if(target.length() >= arr[i].length()){
            if(arr[i] == makeSubStr(target, 0, arr[i].length())){
                if(canConstruct ( makeSubStr(target, arr[i].length(), target.length()), arr, len )){
                    memo[target] = 2;
                    return true;
                }
            }
        }
    }

    memo[target] = 1;
    return false;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // string arr[] = {"ab", "abc", "cd", "def", "abcd"};
    // cout << canConstruct("abcdef", arr, 5) << endl;
    
    // string arr[] = {"bo", "rd", "ate", "t", "ska", "sk", "boar"};
    // cout << canConstruct("skateboard", arr, 7) << endl;

    // string arr[] = {"a", "p", "ent", "enter", "ot", "o", "t"};
    // cout << canConstruct("enterapotentpot", arr, 7) << endl;
    
    string arr[] = {"e", "ee", "eee", "eeee", "eeeee", "eeeeee"};
    // string arr[] = {"e", "f"};
    cout << canConstruct("eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeef", arr, 5) << endl;
    
    
}
