#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


string solve(string str){
    ll i, j, pStart, pEnd, currLen = 1, stringLen = str.length(), maxLen = 1, maxPalinStart = 0;
    string ans = "";
    for(i = 1; i < stringLen; i ++){
        
        if(str[i - 1] == str[i]){
            pStart = i - 1;
            pEnd = i;
            currLen = 2;

            while(true){
                if(pStart == 0 || pEnd == stringLen - 1){
                    break;
                }

                if(str[pStart - 1] == str[pEnd + 1]){
                    currLen += 2;
                    pStart --;
                    pEnd ++;
                }
                else{
                    break;
                }
            }
            if(currLen > maxLen){
                maxPalinStart = pStart;
                maxLen = currLen;
            }
        }
        
        pStart = i;
        pEnd = i;
        currLen = 1;
        while(true){
            if(pStart == 0 || pEnd == stringLen - 1){
                break;
            }

            if(str[pStart - 1] == str[pEnd + 1]){
                currLen += 2;
                pStart --;
                pEnd ++;
            }
            else{
                break;
            }
        }
        if(currLen > maxLen){
            maxPalinStart = pStart;
            maxLen = currLen;
        }
    }

    for(i = maxPalinStart; i < maxPalinStart + maxLen; i ++ ){
        ans += str[i];
    }

    return ans;
}


int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long noOfCases;
    string str, ans; 
    cin >> noOfCases; 

    while( noOfCases --) {
        cin >> str;
        ans = solve(str);
        cout << ans << "\n";

    }
}