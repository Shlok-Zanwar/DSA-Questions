// Write a function canConstruct(target, wordBank) that accepts a target string and an array of strings.
// The function should return a boolean indicating whether or not the "target" can be constructed by concatenating elements of the "wordBank" array.
// You may reuse elements of wordBank as many times as needed.

#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;
typedef long long ll;


string makeSubStr(string str, ll start, ll end){
    string ans = "";
    for(ll i = start; i < end; i ++){
        ans += str[i];
    }
    return ans;
}


ll countConstruct(string target, string arr[], ll len){
    ll isPossible[target.length() + 1] = {0};
    ll i, j;
    isPossible[0] = 1;

    for(i = 0; i < target.length(); i ++){
        if(isPossible[i] > 0){
            for(j = 0; j < len; j ++){
                if(i + arr[j].length() <= target.length()){
                    if( makeSubStr(target, i, i + arr[j].length() ) == arr[j] ){
                        isPossible[i + arr[j].length()] += isPossible[i]; 
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
    cout << countConstruct("abcdef", arr1, 5) << endl;
    
    string arr2[] = {"bo", "rd", "ate", "t", "ska", "sk", "boar"};
    cout << countConstruct("skateboard", arr2, 7) << endl;

    string arr3[] = {"a", "p", "ent", "enter", "ot", "o", "t"};
    cout << countConstruct("enterapotentpot", arr3, 7) << endl;

    string arr4[] = {"purp", "p", "ur", "le", "purpl"};
    cout << countConstruct("purple", arr4, 5) << endl;
    
    string arr5[] = {"e", "ee", "eee", "eeee", "eeeee", "eeeeee"};
    cout << countConstruct("eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeef", arr5, 6) << endl;
    
    
    
    auto program_time_stop = high_resolution_clock::now();
    cout << "\n\n\033[0;33mTime taken : " << (duration_cast<milliseconds>(program_time_stop - program_time_start).count()) << " milliseconds\033[0m\n";
}
