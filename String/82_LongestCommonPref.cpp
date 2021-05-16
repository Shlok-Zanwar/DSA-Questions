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


ll minimum(ll a, ll b){
    return a <= b ? a : b;
}

string longestCommonPrefix(vector<string>& strs) {
    ll i, j, startIndex = 0, endIndex = strs[0].length();
    for(i = 1; i < strs.size(); i ++){
        for(j = 0; j < minimum(strs[i].length(), endIndex); j ++){
            if(strs[i][j] != strs[0][j]){
                endIndex = j;
                break;
            }
        }

        if(j == 0){
            return "";
        }
        if(j == strs[i].length()){
            endIndex = minimum(endIndex, j);
        }
    }
// cout << startIndex << " " << endIndex << "\n";
    return makeSubStr(strs[0], startIndex, endIndex);
}


int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    ll cases, i, j, len;
    
    cout << "cases : ";
    cin >> cases;
    string str;
    vector<string> strs;

    while (cases --){
        cin >> len;
        
        for(i = 0; i < len; i ++){
            cin >> str;
            strs.push_back(str);
        }

        cout << longestCommonPrefix(strs) << "\n";
        strs.clear();
    }

}
