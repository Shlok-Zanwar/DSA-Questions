#include<bits/stdc++.h>
using namespace std;


void printSentenceRec(vector<vector<string>> arr, int currIndex, int maxLen, string currString){
    int i;
    for(i = 0; i < arr[currIndex].size(); i ++){
        if(currIndex == maxLen - 1){
            cout << currString << arr[currIndex][i] << endl;
        }
        else{
            printSentenceRec(arr, currIndex + 1, maxLen, currString + arr[currIndex][i] + " ");
        }
    }
}


int main(){
    vector<vector<string>> arr;
    vector<string> temp;
    string input;
    int lenOfVector, i, lenIndivisual;

    cout << "Enter length of vector : " ;
    cin >> lenOfVector;

    for(i = 0; i < lenOfVector; i ++){
        cout << "    Enter len of index " << i << " : ";
        cin >> lenIndivisual;

        temp.clear();
        while(lenIndivisual --){
            cout << "        Enter string of index " << i << " : ";
            cin >> input;
            temp.push_back(input);
        }

        arr.push_back(temp);
    }

    cout << "\nString are :-\n\n";
    printSentenceRec(arr, 0, arr.size(), "");

}