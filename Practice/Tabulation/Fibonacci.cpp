// FIB Memoization
// Write a function fib(n) that takes in a number as an argument. The function should return the n-th number of Fibonacci sequences.
// Dp is splitting big problems to small ones

#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;
typedef long long ll;

ll maximum(ll a, ll b){
    return a >= b ? a : b;
}

ll arr[1000] = {0};
ll start = 2;

void fib(int num){
    ll i;
    for (i = start; i <= num; i ++){
        // cout << "doing : " << i << endl; 
        arr[i] = arr[i-1] + arr[i-2];
    } 
}


int main(){
    auto program_time_start = high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    arr[1] =  1;
    fib(3);
    cout << arr[3] << endl;

    start = maximum(start, 3);

    fib(8);
    cout << arr[8] << endl;

    start = maximum(start, 3);

    fib(50);
    cout << arr[50] << endl;


    auto program_time_stop = high_resolution_clock::now();
    cout << "\n\n\033[0;33mTime taken : " << (duration_cast<milliseconds>(program_time_stop - program_time_start).count()) << " milliseconds\033[0m\n";
}
