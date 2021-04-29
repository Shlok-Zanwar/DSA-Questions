#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;
typedef long long ll;


string convToKeypad(string str){
    string ans = "";
    ll i;
    string keypad[] = {
                    "2","22","222",
                    "3","33","333",
                    "4","44","444",
                    "5","55","555",
                    "6","66","666",
                    "7","77","777","7777",
                    "8","88","888",
                    "9","99","999","9999"
                   };

    for(i = 0; i < str.length(); i ++){
        if(str[i] == ' '){
            ans += '0';
        }
        else{
            ans += keypad[str[i] - 'A'];
        }
    }

    return ans;
}



int main(){
    auto program_time_start = high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll cases, i, j, len;
    cin >> cases;
    string str;
    while (cases --){
        cin >> str;
        cout << convToKeypad(str) << "\n";
    }
    
    
    auto program_time_stop = high_resolution_clock::now();
    cout << "\n\n\033[0;33mTime taken : " << (duration_cast<milliseconds>(program_time_stop - program_time_start).count()) << " milliseconds\033[0m\n";
}
