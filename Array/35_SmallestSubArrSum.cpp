#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll minimum(ll a, ll b){
    return a <= b ? a : b;
}


ll smallestSubArrLen(ll arr[], ll len, ll reqSum){
    ll iStart = 0, iEnd = 1, currSum = arr[0];

    while(currSum <= reqSum){
        // If not possible
        if(iEnd == len){
            return -1;
        }

        currSum += arr[iEnd];
        iEnd ++;
    }

    ll minLen = iEnd - iStart;

    while(currSum > reqSum){
        if((currSum - arr[iStart]) > reqSum){
            
            currSum -= arr[iStart];
            iStart ++;
            minLen = minimum(minLen, (iEnd - iStart));
            if(minLen == 1){
                return 1;
            }
        }
        else{
            if(iEnd == len){
                break;
            }

            currSum += arr[iEnd];
            iEnd ++;
        }

    }

    return minLen;
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll cases, i, reqSum, len;
    cin >> cases;
    
    while (cases --){
        cin >> len;
        ll arr[len];
        
        for(i = 0; i < len; i ++){
            cin >> arr[i];
        }

        cin >> reqSum;

        cout << smallestSubArrLen(arr, len, reqSum) << endl;
    }

}
