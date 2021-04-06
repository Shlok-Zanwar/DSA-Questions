#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void findAllSubSeq(string str, string currStr, ll startIndex){
    ll i;

    for(i = startIndex; i < str.length(); i ++){
        currStr += str[i];
        cout << currStr << endl;
        findAllSubSeq(str, currStr, i  + 1);
        currStr.pop_back();
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
        findAllSubSeq(str, "", 0);
    }
}

