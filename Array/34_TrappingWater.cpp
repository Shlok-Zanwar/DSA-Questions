#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


ll maximum(ll a, ll b){
    return a >= b ? a : b;
}

ll minimum(ll a, ll b){
    return a <= b ? a : b;
}


ll trappingWater(ll arr[], ll len){
    ll lMax[len];
    ll rMax[len];
    ll curr, i, ans = 0;

    // For left
    lMax[0] = arr[0];
    for(i = 1; i < len; i ++){
        lMax[i] = maximum(lMax[i-1], arr[i]);
    }

    // For right
    rMax[len - 1] = arr[len - 1];
    for(i = len - 2; i >= 0; i --){
        rMax[i] = maximum(rMax[i + 1], arr[i]);
    }

    for(i = 1; i < len - 1; i ++){
        curr = minimum(lMax[i], rMax[i]) - arr[i];
        if(curr > 0){
            ans += curr;
        }
    }

    return ans;
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll cases, i, j, len;
    cin >> cases;
    
    while (cases --){
        cin >> len;
        ll arr[len];
        
        for(i = 0; i < len; i ++){
            cin >> arr[i];
        }

        cout << trappingWater(arr, len) << endl;

    }
    
}
