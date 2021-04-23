// Say that you are a traveler on a 2D grid. You begin in the top-left corner and your goal is to travel to the bottom-right corner. You may only move down or right.
// In how many ways can you travel to the goal on a grid with dimensions m * n?

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll factorial(ll n){
    return ((n == 1 || n == 0) ? 1 : n*factorial(n - 1)) ;
}

ll nCr(ll n, ll r){
    return factorial(n) / (factorial(r) * factorial(n - r));
}

// Flaw because it contains factorial (Probably ?)
ll gridTravelLogic(ll rows, ll columns){
    if(rows == 0 || columns == 0){
        return 0;
    }
    else if(rows == 1 || columns == 1){
        return 1;
    }
    else{
        return nCr((rows + columns - 2), (rows - 1));
    }
}


// By dynamic programming (Find repetitive)
// stringstream geek(s);
map<string , ll> values;

ll gridTravelDP(ll row, ll col){
    string myKey = to_string(row) + "," + to_string(col), myKey2 = to_string(col) + "," + to_string(row);
    if (values[myKey] != 0){
        return values[myKey];
    }
    if (values[myKey2] != 0){
        return values[myKey2];
    }

    if(row == 0 || col == 0){
        return 0;
    }
    else if(row == 1 || col == 1){
        return 1;
    }

    values[myKey] = gridTravelDP(row - 1, col) + gridTravelDP(row, col - 1);
    return values[myKey];
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cout << gridTravelDP(18, 18) << endl;
}
