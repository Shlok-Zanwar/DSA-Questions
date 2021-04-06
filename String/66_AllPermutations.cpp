#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void findAllSubPermutaations(string str, string currStr, ll used[]){
    ll i;
    if(currStr.length() == str.length()){
        cout << currStr << endl;
        return;
    }

    for(i = 0; i < str.length(); i ++){
        if(used[i] == 0){
            currStr += str[i];
            used[i] = 1;
            findAllSubPermutaations(str, currStr, used);
            used[i] = 0;
            currStr.pop_back();
        }
    }

}


int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long noOfCases; 
    cin >> noOfCases; 
    string str;

    while( noOfCases --) {
        cin >> str;
        ll used[str.length()] = {0};
        findAllSubPermutaations(str, "", used);
    }
}
