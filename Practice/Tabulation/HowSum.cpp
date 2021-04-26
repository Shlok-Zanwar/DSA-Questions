// Write a function howSum(targetSum, numbers) that takes in a targetSum and an array of numbers as arguments.
// The function should return an array containing any combination of elements that add up to exactly the targetSum.
// If there is no combination that adds up to the targetSum, then return null.
// If there are multiple combinations possible, you may return any single one.

#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;
typedef long long ll;


vector<ll> howSum(ll target, ll arr[], ll len){
    vector<ll> details[target + 1];
    ll i, j, nextNum;

    for(i = 0; i < len; i ++){
        details[arr[i]].push_back(arr[i]);
    }

    for(i = 1; i <= target; i ++){

        if(details[i].size() > 0){

            for(j = 0; j < len; j ++){
                nextNum = i + arr[j];
                // Checking out of bound
                if(nextNum <= target){
                    details[nextNum] = details[i];
                    details[nextNum].push_back(arr[j]);
                }
            }
        }
    }

    return details[target];
}


void printVector(vector<ll> vec){
    for(ll i = 0; i < vec.size(); i ++){
        cout << vec[i] << " ";
    }
    cout << "\n";
}


int main(){
    auto program_time_start = high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll arr[] = {7, 14}, len = 2;
    printVector(howSum(300, arr, len)); // null

    ll arr1[] = {2, 3}, len1 = 2;
    printVector(howSum(7, arr1, len1)); // 3 2 2

    ll arr2[] = {5, 3, 4, 7}, len2 = 4;
    printVector(howSum(7, arr2, len2)); // 4 3

    ll arr3[] = {2, 4}, len3 = 2;
    printVector(howSum(7, arr3, len3)); // null

    ll arr4[] = {2, 3, 5}, len4 = 3;
    printVector(howSum(8, arr4, len4)); // 2 2 2 2 
    
    
    auto program_time_stop = high_resolution_clock::now();
    cout << "\n\n\033[0;33mTime taken : " << (duration_cast<milliseconds>(program_time_stop - program_time_start).count()) << " milliseconds\033[0m\n";
}
