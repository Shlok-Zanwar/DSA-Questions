// Write a function canSum(targetSum, numbers) that takes in a targetSum and an array of numbers as arguments.
// The function should return a boolean indicating whether or not it
// is possible to generate the targetSum using numbers from the array.
// You may use an element of the array as many times as needed. You may assume that all input numbers are nonnegative.


#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;
typedef long long ll;


bool canSum(ll target, ll arr[], ll len){
    bool isPossible[target + 1] = {false};
    ll i, j, nextTrue;
    isPossible[0] = true;
    
    for(i = 0; i <= target; i ++){
        if(isPossible[i] == true){
            for(j = 0; j < len; j ++){
                nextTrue = i + arr[j];

                if(nextTrue <= target){
                    isPossible[nextTrue] = true;

                    // Just to be optimized (can comment the next 'if')
                    if(nextTrue == target){
                        return true;
                        break;
                    }
                }
            }
        }
    }


    return isPossible[target];
}


int main(){
    auto program_time_start = high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll arr[] = {7, 14}, len = 2;
    cout << canSum(300, arr, len) << endl; // false

    ll arr1[] = {2, 3}, len1 = 2;
    cout << canSum(7, arr1, len1) << endl; // true

    ll arr2[] = {5, 3, 4, 7}, len2 = 4;
    cout << canSum(7, arr2, len2) << endl; // true

    ll arr3[] = {2, 4}, len3 = 2;
    cout << canSum(7, arr3, len3) << endl; // false

    ll arr4[] = {2, 3, 5}, len4 = 3;
    cout << canSum(8, arr4, len4) << endl; // true
    
    
    auto program_time_stop = high_resolution_clock::now();
    cout << "\n\n\033[0;33mTime taken : " << (duration_cast<milliseconds>(program_time_stop - program_time_start).count()) << " milliseconds\033[0m\n";
}
