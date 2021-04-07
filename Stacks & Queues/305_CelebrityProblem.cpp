#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int celebrity(vector<vector<int> > &arr, int len){
    ll i, j;
    for(i = 0; i < len; i ++){
        for(j = 0; j < len; j ++){
            if(arr[i][j] == 1){
                arr[i][i] = 1;
            }

            if(i != j){
                if(arr[i][j] == 0){
                    arr[j][j] = 1;
                }
            }

        }
    }

    for(i = 0; i < len; i ++){
        if(arr[i][i] == 0){
            return i;
        }
    }
    
    return -1;
}


int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long noOfCases, len, ans, temp, i, j; 
    vector<vector<int>> arr;
    vector<int> tempArr;
    cin >> noOfCases; 

    while( noOfCases --) {
        cin >> len;
        for(i = 0; i < len; i ++){
            tempArr.clear();
            for(j = 0; j < len; j ++){
                cin >> temp;
                tempArr.push_back(temp);
            }
            arr.push_back(tempArr);
        }
        ans = celebrity(arr, len);
        cout << ans << endl;
    }
}
