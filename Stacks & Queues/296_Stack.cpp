#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int arrLen = 1000;

int stackPush(int arr[], int top){
    if(top == arrLen - 1){
        cout << "    Stack size reached.\n";
        return top;
    }

    int inp;
    cout << "\n    Enter value : ";
    cin >> inp;
    arr[top + 1] = inp;

    return top + 1;  
}


int stackPop(int arr[], int top){
    if(top == -1){
        cout << "    Nothing to pop.\n";
        return -1;
    }
    cout << "    " << arr[top] << " popped\n";
    return top - 1;
}


void stackTop(int arr[], int top){
    if(top == -1){
        cout << "    Empty stack.\n";
        return;
    }
    cout << "    Top = " << arr[top] << "\n";
}


int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    int top = -1, arr[arrLen], operation = 1;
    while(operation){
        cout << "\n\nEnter opration : \n1) Push\n2) Pop\n3) Top\n0)Exit\nOpration : ";
        cin >> operation;

        switch(operation){
            case 1:
                top = stackPush(arr, top);
                break;

            case 2:
                top = stackPop(arr, top);
                break;

            case 3:
                stackTop(arr, top);
                break;

            case 0:
                cout << "Thankyou !\n";
                break;
        }
    }

}
