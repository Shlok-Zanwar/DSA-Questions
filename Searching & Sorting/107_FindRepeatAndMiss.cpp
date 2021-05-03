#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


ll *findTwoElement(ll arr[], ll len) {
    ll i, ans[2] = {0};
    for(i = 0; i < len; i ++){
        // cout << arr[abs(arr[i]) - 1] << "  hi\n";
        if (arr[abs(arr[i]) - 1] > 0){
            arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
        }
        else{
            ans[0] = abs(arr[i]);
        }
    }

    for(i = 0; i < len; i ++){
        if(arr[i] > 0){
            ans[1] = i + 1;
            return ans;
        }
    }

    return ans;
}


int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    
    ll cases, i, j, len, *ans;
    cin >> cases;
    
    while (cases --){
        cin >> len;
        ll arr[len];
        
        for(i = 0; i < len; i ++){
            cin >> arr[i];
        }

        ans = findTwoElement(arr, len);
        cout << ans[0] << " " << ans[1];

    }

}
