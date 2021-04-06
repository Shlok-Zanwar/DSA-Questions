#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll solve(string str){
    ll i, cnt0s = 0, cnt1s = 0, ans = 0;

    for(i = 0; i < str.length(); i ++){
        if(str[i] == '0'){
            cnt0s ++;
        }
        else{
            cnt1s ++;
        }
    
        if(cnt0s == cnt1s){
            ans ++ ;
        }
    }

    return ans;
}


int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long noOfCases, ans; 
    cin >> noOfCases; 
    string str;

    while( noOfCases --) {
        cin >> str;
        ans = solve(str);
        cout << ans << endl;
    }
}

