#include<bits/stdc++.h>
using namespace std;


void countAndSay(int num){
    int currNum = 1, count, i;
    string prevSay = "1", currSay = "";

    cout << "countAndSay(1) 1" << endl;
    while(currNum != num){
        count = 1;
        currSay = "";
        
        for(i = 1; i < prevSay.length(); i++){
            if(prevSay[i] != prevSay[i - 1]){
                currSay += to_string(count) + prevSay[i - 1];
                count = 1;
            }
            else{
                count ++;
            }
        }
        currSay += to_string(count) + prevSay[i - 1];

        cout << "countAndSay(" << (currNum + 1) << ") " << currSay << endl;
        prevSay = currSay;  
        currNum ++;
    }

    cout << currSay << endl;

}


int main(){
    int num;
    cout << "Input : ";
    cin >> num;

    countAndSay(num);
}