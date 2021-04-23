// Write a function canSum(targetSum, numbers) that takes in a targetSum and an array of numbers as arguments.
// The function should return a boolean indicating whether or not it
// is possible to generate the targetSum using numbers from the array.
// You may use an element of the array as many times as needed. You may assume that all input numbers are nonnegative.

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


map<ll , ll> values;

bool canSum(ll targetSum, ll arr[], ll len){
    if(targetSum == 0){
        return true;
    }
    if(values[targetSum] == 1){
        // Defined 1 for false
        return false;
    }
    else if(values[targetSum] == 2){
        // Defined 2 for true
        return true;
    }

    ll i;
    for(i = 0; i < len; i++){
        ll remainder = targetSum - arr[i];
        if(remainder >= 0){
            if(canSum(remainder, arr, len) == true){
                // Defined 2 for true
                values[targetSum] = 2;
                return true;
            }
        }
    }

    // Defined 1 for false
    values[targetSum] = 1;
    return false;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     
    ll arr[] = {7, 14}, len = 2;

    cout << canSum(300, arr, len) << endl;
}
