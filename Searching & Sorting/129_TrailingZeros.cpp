#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int logBase(int x, int base){
    return (int)(log(x) / log(base));
}


int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    int n, extra, logValue, ans;
    cin >> n;

    ans = 5*n;
    logValue = logBase(n, 5);
    extra = (logValue * (logValue + 1))/2;

    ans = ans - (extra*5);
    cout << ans;
}
