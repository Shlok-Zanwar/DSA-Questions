// FIB Memoization
// Write a function fib(n) that takes in a number as an argument. The function should return the n-th number of Fibonacci sequences.

// Dp is splitting big problems to small ones

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


map<ll , ll> values;


ll fibRecursive(ll n) {
    if(n <= 2){
        return 1;
    }
    return fibRecursive(n-1) + fibRecursive(n-2);
}


ll fibDP(ll n){
    if(values[n] != 0){
        return values[n];
    }
    if(n <= 2){
        return 1;
    }
    values[n] = fibDP(n-1) + fibDP(n-2);
    return values[n];
}

// Another method is by for loop and array curr = (prev) + (prev-1)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // cout << fibRecursive(6) << endl;
    // cout << fibRecursive(7) << endl;
    // cout << fibRecursive(50) << endl;

    cout << fibDP(6) << endl;
    cout << fibDP(7) << endl;
    cout << fibDP(50) << endl;
}

