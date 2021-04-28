// Write a function canConstruct(target, wordBank) that accepts a target string and an array of strings.
// The function should return a boolean indicating whether or not the "target" can be constructed by concatenating elements of the "wordBank" array.
// You may reuse elements of wordBank as many times as needed.


#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;
typedef long long ll;


ll minimum(ll a, ll b){
    return a <= b ? a : b;
}


string makeSubStr(string str, ll start, ll end){
    string ans = "";
    for(ll i = start; i < end; i ++){
        ans += str[i];
    }
    return ans;
}

// We start from all the words in arr and mark the indices true at which we can reach
// Then we iterate through the new arrayagain and then only llo for thos which we could have reached
// https://youtu.be/oBt53YbR9Kk?t=15887
bool canConstruct(string target, string arr[], ll len){
    bool isPossible[target.length() + 1] = {false};
    ll i, j;
    isPossible[0] = true;

    for(i = 0; i < target.length(); i ++){
        if(isPossible[i]){
            for(j = 0; j < len; j ++){
                // If the word matches the charecter at position i
                // cout << makeSubStr(target, i, i + arr[j].length()) << endl;
                if(i + arr[j].size() <= target.length()){
                    if( makeSubStr(target, i, (i + arr[j].size())) == arr[j] ){
                        isPossible[i + arr[j].length()] = true;

                        // Optimize (return if first time made)
                        if(isPossible[target.length()]){
                            return true;
                        }
                    }
                }
            }
        }
    }

    return isPossible[target.length()];
}


int main(){
    auto program_time_start = high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string arr1[] = {"ab", "abc", "cd", "def", "abcd"};
    cout << canConstruct("abcdef", arr1, 5) << endl;
    
    string arr2[] = {"bo", "rd", "ate", "t", "ska", "sk", "boar"};
    cout << canConstruct("skateboard", arr2, 7) << endl;

    string arr3[] = {"a", "p", "ent", "enter", "ot", "o", "t"};
    cout << canConstruct("enterapotentpot", arr3, 7) << endl;
    
    string arr4[] = {"e", "ee", "eee", "eeee", "eeeee", "eeeeee"};
    cout << canConstruct("eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeef", arr4, 6) << endl;
    
    
    auto program_time_stop = high_resolution_clock::now();
    cout << "\n\n\033[0;33mTime taken : " << (duration_cast<milliseconds>(program_time_stop - program_time_start).count()) << " milliseconds\033[0m\n";
}
