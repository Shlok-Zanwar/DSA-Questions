#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


ll maximum(ll a, ll b){
    return a >= b ? a : b;
}


ll findMaxSum(ll arr[], ll len){
    if(len == 1){
        return arr[0];
    }
    else if(len == 2){
        return maximum(arr[0], arr[1]);
    }

    ll ans[len], i;
    ans[len-1] = arr[len-1];
    ans[len-2] = arr[len-2];
    ans[len-3] = ans[len-1] + arr[len-3];

    for(i = len - 4; i >= 0; i --){
        ans[i] = arr[i] + maximum(ans[i + 2], ans[i + 3]);
    }

    return maximum(ans[0], ans[1]);
}


int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    ll cases, i, j, len;
    
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

        cout << findMaxSum(arr, len) << endl;
    }

}
