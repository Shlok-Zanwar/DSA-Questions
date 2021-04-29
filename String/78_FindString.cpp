#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;
typedef long long ll;


ll checkRecursice(string str, ll currStrIndex, string arr[], ll currRow, ll currCol){
    if(currRow < 0 || currCol < 0 || currRow >= arr->length() || currCol >= arr[0].length()){
        return 0;
    }

    if(str[currStrIndex] == arr[currRow][currCol]){
        if(currStrIndex == str.length() - 1){
            return 1;
        }
        return 
        checkRecursice(str, (currStrIndex + 1), arr, (currRow + 1), (currCol) ) +
        checkRecursice(str, (currStrIndex + 1), arr, (currRow - 1), (currCol) ) +
        checkRecursice(str, (currStrIndex + 1), arr, (currRow), (currCol + 1) ) +
        checkRecursice(str, (currStrIndex + 1), arr, (currRow), (currCol - 1) ) ;
    }
    else{
        return 0;
    }
}


ll countAllStr(string str, string arr[]){
    int i, j, ans = 0;
    for(i = 0; i < arr->length(); i ++){
        for(j = 0; j < arr[0].length(); j ++){
            ans += checkRecursice(str, 0, arr, i, j);
        }
    }

    return ans;
}


int main(){
    auto program_time_start = high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll cases, i, j, len;
    cin >> cases;
    string str;


    while (cases --){
       cin >> len;
       string arr[len];
       
       for(i = 0; i < len; i ++){
           cin >> arr[i];
       }

       cin >> str;
       cout << countAllStr(str, arr) << endl;
    }
    
    
    auto program_time_stop = high_resolution_clock::now();
    cout << "\n\n\033[0;33mTime taken : " << (duration_cast<milliseconds>(program_time_stop - program_time_start).count()) << " milliseconds\033[0m\n";
}


// 1
// 6     
// BBABBM
// CBMBBA
// IBABBG
// GOZBBI
// ABBBBC
// MCIGAM
// MAGIC