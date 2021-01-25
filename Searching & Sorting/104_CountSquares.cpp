#include<bits/stdc++.h>
using namespace std;

int countSquares(int N) {
    int root = sqrt(N);

    if((root*root) == N){
        return root - 1;
    }
    else{
        return root;
    }
}

int main(){
    int num;
    cout << "Number : ";
    cin >> num;

    cout << "Count Squares = " << countSquares(num);

}