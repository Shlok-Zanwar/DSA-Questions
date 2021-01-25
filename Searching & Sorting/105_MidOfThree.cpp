#include<bits/stdc++.h>
using namespace std;

int middle(int A, int B, int C){
    int mid = C;
    if(A > min(B, C) && A < max(B, C)){
        mid = A;
    }
    else if (B > min(A, C) && B < max(A, C)){
        mid = B;
    }

    return mid;
}

int main(){
    int a, b, c;
    cout << "Enter the three numbers : ";
    cin >> a >> b >> c;

    cout << "Mid is = " << middle(a, b, c);
}