#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


ll countTriplets(ll arr[], int len, ll sum){
    sort(arr, arr + len);
    ll ans = 0, first, second, third;

    for(first = 0; first < len - 2; first ++){
        second = first + 1;
        third = len - 1;

        while(third > second){
            // if(second == third){
            //     break;
            // }

            if(arr[first] + arr[second] + arr[third] < sum){
                // cout << first << " " << second << " " << third << "\n";
                ans += (third - second);
                second ++;
            }
            else{
                third --;
            }
        }

    }

    return ans;
}


int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    ll cases, i, sum, len;
    
    cout << "cases : ";
    cin >> cases;
    
    while (cases --){
        cout << "len : ";
        cin >> len;
        ll arr[len];
        
        cout << "arr : ";
        for(i = 0; i < len; i ++){
            cin >> arr[i];
        }

        cout << "x : ";
        cin >> sum;

        cout << countTriplets(arr, len, sum) << "\n";
    }

}
