#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;
typedef long long ll;


ll gridTraveler(ll rows, ll cols){
    ll arr[rows + 1][cols + 1], i, j;
    for(i = 0; i <= rows; i ++){
        for(j = 0; j <= cols; j ++){
            arr[i][j] = 0;
            // cout << arr[i][j] << " ";
        }
        // cout << "\n";
    }

    arr[1][1] = 1;
    

    for(i = 1; i <= rows; i ++){
        for(j = 1; j <= cols; j ++){
            if(j < cols){
                // Telling my right index new values;
                arr[i][j + 1] += arr[i][j];
            }
            if(i < rows){
                // Telling my bottom index new values;
                arr[i + 1][j] += arr[i][j];
            }
        }
    }

    return arr[rows][cols];
}


int main(){
    auto program_time_start = high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cout << gridTraveler(30, 30) << endl;
    
    
    auto program_time_stop = high_resolution_clock::now();
    cout << "\n\n\033[0;33mTime taken : " << (duration_cast<milliseconds>(program_time_stop - program_time_start).count()) << " milliseconds\033[0m\n";
}
