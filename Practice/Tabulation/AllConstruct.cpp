// Write a function allConstruct(target, wordBank) that accepts a target string and an array of strings.
// The function should return a 2D array containing all of the ways that the target can be constructed by concatenating elements of the wordBank array. Each element of the 2D array should represent one combination that constructs the target.
// You may reuse elements of wordBank as many times as needed.


#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;
typedef long long ll;


string makeSubStr(string str, ll start, ll end){
    string ans = "";
    for(ll i = start; i < end; i ++){
        ans += str[i];
    }
    return ans;
}


void print2DVector(vector<vector<string>> vec){
    ll i, j;
    if(vec.size() == 0){
        cout << "None" << endl;
    }
    for(i = 0; i < vec.size(); i ++){
        for(j = 0; j < vec[i].size(); j ++){
            cout << vec[i][j] << ", ";
        }
        cout << endl;
    }
}



vector<vector<string>> allConstruct(string target, string arr[], ll len){
    vector<vector<string>> combinations[target.length() + 1];
    vector<string> temp;
    ll i = 0, j, k;
    combinations[0].push_back(temp);


    for(j = 0; j < len; j ++){
        if(i + arr[j].length() <= target.length()){
            if( makeSubStr(target, i, i + arr[j].length() ) == arr[j] ){
                temp.push_back(arr[j]);
                combinations[i + arr[j].length()].push_back(temp);
                temp.clear();
            }
        }
    }
    

    for(i = 1; i < target.length(); i ++){

        // checking if we can reach the index i.
        if(combinations[i].size() > 0){
            
            // for loop for checking all strings
            for(j = 0; j < len; j ++){
                //length verification
                if(i + arr[j].length() <= target.length()){
                    if( makeSubStr(target, i, i + arr[j].length() ) == arr[j] ){

                        // Copying all the elements and adding the new arr[j] to it and then storing them to the new reachable position
                        for(k = 0; k < combinations[i].size(); k ++){
                            temp = combinations[i][k];
                            temp.push_back(arr[j]);
                            combinations[i + arr[j].length()].push_back(temp);
                            temp.clear();
                        }
                    }
                }
            }
        }
    }

    // return combinations[0][0];
    return combinations[target.length()];
}



int main(){
    auto program_time_start = high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string arr1[] = {"ab", "abc", "cd", "def", "abcd", "ef", "c"};
    print2DVector(allConstruct("abcdef", arr1, 7));
    cout << endl;
    
    string arr2[] = {"bo", "rd", "ate", "t", "ska", "sk", "boar"};
    print2DVector(allConstruct("skateboard", arr2, 7));
    cout << endl;

    string arr3[] = {"a", "p", "ent", "enter", "ot", "o", "t"};
    print2DVector(allConstruct("enterapotentpot", arr3, 7));
    cout << endl;

    string arr4[] = {"purp", "p", "ur", "le", "purpl"};
    print2DVector(allConstruct("purple", arr4, 5));
    cout << endl;
    
    string arr5[] = {"e", "ee", "eee", "eeee", "eeeee", "eeeeee"};
    print2DVector(allConstruct("eeeeeeeeeef", arr5, 6));
    cout << endl;
    
    
    auto program_time_stop = high_resolution_clock::now();
    cout << "\n\n\033[0;33mTime taken : " << (duration_cast<milliseconds>(program_time_stop - program_time_start).count()) << " milliseconds\033[0m\n";
}
