#include<bits/stdc++.h>
using namespace std;


vector<string> finalStrs;


void printFinalString(){
    int i;
    for(i = 0; i < finalStrs.size(); i++){
        cout << finalStrs[i] << endl;
    }
}


void makeSentenceRec(vector<vector<string>> arr, int currIndex, int maxLen, string currString){
    int i;
    for(i = 0; i < arr[currIndex].size(); i ++){
        if(currIndex == maxLen - 1){
            // cout << currString << arr[currIndex][i] << endl;
            finalStrs.push_back(currString + arr[currIndex][i]);
        }
        else{
            makeSentenceRec(arr, currIndex + 1, maxLen, currString + arr[currIndex][i] + " ");
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
    makeSentenceRec(arr, 0, arr.size(), "");
    printFinalString();

}