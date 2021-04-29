#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;
typedef long long ll;


ll countRev(string str){
    stack<char> stk;
    ll i, ans = 0;

    if(str.length() % 2 == 1){
        return -1;
    }

    for(i = 0; i < str.length(); i ++){

        if(stk.size() == str.length() - i){
            for(i; i < str.length(); i ++){
                if(str[i] == '{'){
                    ans ++;
                }
            }
        }

        if(stk.empty()){
            if(str[i] == '}'){
                ans ++;
            }
            stk.push('{');
        }
        else{
            if(str[i] == '{'){
                stk.push('{');
            }
            else{
                stk.pop();
            }
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
        cout << countRev(str) << endl;
    }
    
    
    auto program_time_stop = high_resolution_clock::now();
    cout << "\n\n\033[0;33mTime taken : " << (duration_cast<milliseconds>(program_time_stop - program_time_start).count()) << " milliseconds\033[0m\n";
}
