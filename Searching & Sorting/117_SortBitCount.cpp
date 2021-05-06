#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


ll getNoOf1s(ll num){
    ll ans = 0;
    while(num > 0){
        ans += num%2;
        num = num/2;
    }

    return ans;
}


void printArray(ll arr[], ll len){
    ll i;
    for(i = 0; i < len; i ++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}


bool comparator(ll a, ll b){
    // not >= cause of order
    if(getNoOf1s(a) > getNoOf1s(b)){
        return true;
    }
    return false;
}


void sortBySetBitCount(ll arr[], ll len){
    stable_sort(arr, arr + len, comparator);
    // printArray(arr, len);
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

        sortBySetBitCount(arr, len);
    }

}
