// Write a function bestSum(targetSum, numbers) that takes in a targetSum and an array of numbers as arguments.
// The function should return an array containing the shortest combination of numbers that add up to exactly the targetSum.
// If there is a tie for the shortest combination, you may return any one of the shortest.

#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;
typedef long long ll;


vector<ll> bestSum(ll target, ll arr[], ll len){
    vector<ll> details[target + 1];
    ll i, j, nextNum;

    for(i = 0; i < len; i ++){
        details[arr[i]].push_back(arr[i]);
    }

    for(i = 1; i <= target; i ++){
        if(details[i].size() > 0){

            for(j = 0; j < len; j ++){
                nextNum = i + arr[j];
                if(nextNum <= target){
                    if(details[nextNum].size() == 0 || details[nextNum].size() > details[i].size() + 1 ){
                        details[nextNum] = details[i];
                        details[nextNum].push_back(arr[j]);
                    }
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
    
    ll arr1[] = {5, 3, 4, 7}, len1 = 4;
    printVector(bestSum(7, arr1, len1));

    ll arr2[] = {2, 3, 5}, len2 = 3;
    printVector(bestSum(8, arr2, len2));

    ll arr3[] = {1, 4, 5}, len3 = 4;
    printVector(bestSum(8, arr3, len3));

    ll arr4[] = {1, 2, 5, 25}, len4 = 4;
    printVector(bestSum(100, arr4, len4));

    
    
    auto program_time_stop = high_resolution_clock::now();
    cout << "\n\n\033[0;33mTime taken : " << (duration_cast<milliseconds>(program_time_stop - program_time_start).count()) << " milliseconds\033[0m\n";
}
