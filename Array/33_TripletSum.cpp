#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


bool find3Numbers(ll arr[], ll len, ll reqSum){
    // Double pointer method
    sort(arr, arr + len);
    ll i, lPointer, rPointer;

    for(i = 0; i < len - 2; i ++){
        lPointer = i + 1;
        rPointer = len - 1;
        while(rPointer >= lPointer + 1){
            if ((arr[i] + arr[lPointer] + arr[rPointer]) > reqSum){
                rPointer --;
            }
            else if((arr[i] + arr[lPointer] + arr[rPointer]) < reqSum){
                lPointer ++;
            }
            else{
                return true;
            }
        } 
    }

    return false;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll cases, i, j, len, reqSum;
    cin >> cases;
    
    while (cases --){
        cin >> len;
        ll arr[len];
        
        for(i = 0; i < len; i ++){
            cin >> arr[i];
        }

        cin >> reqSum;
        cout << find3Numbers(arr, len, reqSum) << endl;
    }
    
}
