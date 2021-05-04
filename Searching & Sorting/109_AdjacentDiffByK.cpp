#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


ll maximum(ll a, ll b){
    return a >= b ? a : b;
}


ll searchValue(ll arr[], ll len, ll toSearch, ll k){
    ll i = 0;

    while(i < len){
        if(arr[i] == toSearch){
            return i;
        }

        // Directly jumping to the element
        i = i + maximum(1, abs(arr[i] - toSearch)/k);
    }

    return -1;
}


int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    ll cases, i, toSearch, len, k;
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

        cout << "k :";
        cin >> k;
        cout << "search : ";
        cin >> toSearch;

        cout << searchValue(arr, len, toSearch, k) << "\n";
    }

}

