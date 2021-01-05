#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> takeInput(int len){
    int i, temp;
    vector<int> interval;
    vector <vector <int>> input;

    for(i = 1; i <= len; i++){
        cout << "Interval " << i << " : ";
        cin >> temp;
        interval.push_back(temp);
        cin >> temp;
        interval.push_back(temp);
        input.push_back(interval);
        interval.clear();
    }

    return input;
}


void printVector(vector <vector <int>> input, int len){
    int i;
    for(i = 0; i < len; i++){
        cout << "Interval " << i+1 << " : ";
        cout << input[i][0] << " " << input[i][1] << endl;
    }

}


bool sortcol( const vector<int>& v1, const vector<int>& v2 ) { 
    return v1[0] < v2[0]; 
}


vector<vector<int>> mergeIntervals(vector <vector <int>> input, int len){
    vector<vector<int>> output;
    vector<int> interval;
    int i, iStart, maxEnd;

    for(i = 0; i < len; i ++){
        iStart = i;
        maxEnd = input[i][1];
        while (true){
            if(i == len - 1){
                break;
            }
            if(input[i + 1][0] <= maxEnd){
                maxEnd = max(maxEnd, input[i + 1][1]);
                i ++;
            }
            else{
                break;
            }
        }
        interval.push_back(input[iStart][0]);
        interval.push_back(maxEnd);
        output.push_back(interval);
        interval.clear();
    }

    return output;
}


int main(){
    vector <vector <int>> input;
    int len;
    cout << "Length of Array : ";
    cin >> len;

    int arr[len];
    cout << "Input elements " << endl;
    input = takeInput(len);

    // sorting the vector by column 0
    sort(input.begin(), input.end(), sortcol);

    // cout << "ji";
    vector <vector <int>> output = mergeIntervals(input, len);
    // cout << 'hi';

    cout << endl;
    printVector(output, output.size());
    

}
