#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int inSequence(int A, int B, int C){
    if(C == 0){
        return A == B;
    }
    if(A >= B && C <= 0){
        return (B-A)%C == 0;
    }

    if(A <= B && C >= 0){
        return (B-A)%C == 0;
    }

    return 0;
}


int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    ll A, B, C;

    cout << "Enter A (Num 1) : ";
    cin >> A ;
    cout << "Enter B (Num 2) : ";
    cin >> B ;
    cout << "Enter C (Common difference) : ";
    cin >> C;

    cout << inSequence(A, B, C) << "\n";

}
