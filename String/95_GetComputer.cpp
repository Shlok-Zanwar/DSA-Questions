#include<bits/stdc++.h>
using namespace std;


vector<char> didntGet;

int couldntGetComputer(int noOfComputers, string allotment){
    int compInUse = 0, i, didntGetComp = 0;
    int gotComputer[26] = {0};

    for(i = 0; i < allotment.length(); i ++){
        if(gotComputer[(int)allotment[i] - 65] == 1){
            compInUse --;
        }
        else if(gotComputer[(int)allotment[i] - 65] == 5){
            continue;
        }
        else if(compInUse < noOfComputers){
            compInUse ++;
            gotComputer[(int)allotment[i] - 65] = 1;
        }
        else{
            gotComputer[(int)allotment[i] - 65] = 5;
            didntGet.push_back(allotment[i]);    
            didntGetComp ++;
        }
    }

    return didntGetComp;

}


void printDidntGet(){
    for(int i = 0; i < didntGet.size(); i++){
        cout << didntGet[i] << " ";
    }
    cout << endl;
}


int main(){
    int noOfComputers, couldntGet;
    string allotment;

    cout << "Total number of Computers : ";
    cin >> noOfComputers;
    cout << "Computer allotment string : ";
    cin >> allotment;

    couldntGet = couldntGetComputer(noOfComputers, allotment);

    cout << "No of people who couldnt get computer are = " << couldntGet << endl;
    if(couldntGet > 0){
        cout << "They are : ";
        printDidntGet();
    }
    
}