#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(ll len, ll arr[], ll maxWords){
    ll i, startFrom, currCount;
    for(i = 0; i < len; i ++){
        currCount = arr[i];
        cout << i + 1 << " ";
        while(true){
            if(i == len - 1){
                break;
            }

            if(currCount + arr[i + 1] <= maxWords){
                currCount += arr[i + 1];
                i ++;
            }
            else{
                break;
            }
        }

        cout << i + 1 << " ";

    }
}


int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long noOfCases, len, i, maxWords, ans; 
    cin >> noOfCases; 

    while( noOfCases --) {
        cin >> len;
        ll arr[len];
        for(i = 0; i < len; i ++){
            cin >> arr[i];
            arr[i] += 1;
        }
        cin >> maxWords;
        solve(len, arr, maxWords);
        cout << "\n";
    }
}

// GFG Is WRONG
// 84
// 7 8 6 4 6 7 3 10 2 3 8 1 10 4 7 1 7 3 7 2 9 8 10 3 1 3 4 8 6 10 3 3 9 10 8 4 7 2 3 10 4 2 10 5 8 9 5 6 1 4 7 2 1 7 4 3 1 7 2 6 6 5 8 7 6 7 10 4 8 5 6 3 6 5 8 5 5 4 1 8 9 7 9 9
// 14

// Its Correct output is:
// 1 1 2 2 3 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 22 23 23 24 26 27 28 29 29 30 31 32 33 34 34 35 36 37 38 39 40 41 42 43 43 44 45 46 46 47 48 49 51 52 54 55 57 58 59 60 61 62 63 64 64 65 66 67 67 68 69 70 71 72 73 74 75 76 77 78 79 80 80 81 81 82 82 83 83 84 84

// And Your Code's output is:
// 1 1 2 2 3 5 6 7 8 9 10 12 13 13 14 20 21 21 22 22 23 23 24 29 30 30 31 33 34 34 35 36 37 39 40 40 41 42 43 43 44 44 45 45 46 46 47 62 63 63 64 64 65 65 66 66 67 67 68 80 81 81 82 82 83 83 84 84