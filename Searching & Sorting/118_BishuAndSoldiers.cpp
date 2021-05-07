#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


void bishuAndSoldiers(ll arr[], ll len){
    ll hashMap[101] = {0}, i, cnt[101] = {0};
    for(i = 0; i < len; i ++ ){
        hashMap[arr[i]] += arr[i];
        cnt[arr[i]] ++;
    }

    for(i = 1; i < 101; i ++){
        hashMap[i] += hashMap[i-1];
        cnt[i] += cnt[i - 1];
    }

    ll power, rounds;
    cout << "rounds : ";
    cin >> rounds;

    while(rounds --){
        cin >> power;
        cout << cnt[power] << " " << hashMap[power] << "\n";
    }

}


int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    ll cases, i, rounds, len;
    
    cout << "cases : ";
    cin >> cases;
    
    while (cases --){
        cout << "len : ";
        cin >> len;
        ll arr[len];
        
        cout << "arr : ";
        for(i = 0; i < len; i ++){
            cin >> arr[i];
        }
        
        bishuAndSoldiers(arr, len);

    }

}
