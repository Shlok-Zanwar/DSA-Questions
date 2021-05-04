#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// TwoPointer
bool isPair(ll arr[], ll len, ll diff){
    sort(arr, arr + len);
    ll lPointer = 0, rPointer = len - 1;
    while(arr[rPointer] - arr[lPointer] >= diff && lPointer != rPointer){
        if(arr[rPointer] - arr[lPointer] == diff){
            return true;
        }
        else if(arr[rPointer] - arr[lPointer] > diff){
            rPointer --;
        }
        else{
            lPointer ++;
        }
    }

    return false;
}


int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    ll cases, i, diff, len;
    
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

        cout << "diff : ";
        cin >> diff;

        cout << isPair(arr, len, diff) << endl;
    }

}
