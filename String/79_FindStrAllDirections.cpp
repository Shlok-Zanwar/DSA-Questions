#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;
typedef long long ll;


bool goInDirection( vector<vector<char>> grid, string word, int row, int col, int rowIncrement, int colIncrement){
    int currIndex = 0, i;
    for(i = 0; i < word.length(); i ++){
        if(grid[row][col] == word[i]){
            row += rowIncrement;
            col += rowIncrement;
        }
        else{
            break;
        }
    }

    return i == word.length();
}


vector<vector<int>> searchWord(vector<vector<char>> grid, string word){
    int i, j, rows = grid.size(), cols = grid[0].size(), len = word.length();
    vector<int> temp;
    vector<vector<int>> ans;
    for(i = 0; i < rows; i ++){
        for(j = 0; j < cols; j ++){
            if(cols - j >= len){
                if(goInDirection(grid, word, i, j, 0, 1)){
                    temp.clear();
                    temp.push_back(i);
                    temp.push_back(j);
                    ans.push_back(temp);
                };
            }

            if(rows - i >= len){
                if(goInDirection(grid, word, i, j, 1, 0)){
                    temp.clear();
                    temp.push_back(i);
                    temp.push_back(j);
                    ans.push_back(temp);
                }

                if(cols - j >= len){
                    if(goInDirection(grid, word, i, j, 1, 1)){
                        temp.clear();
                        temp.push_back(i);
                        temp.push_back(j);
                        ans.push_back(temp);
                    };
                    if(goInDirection(grid, word, i, j, 1, -1)){
                        temp.clear();
                        temp.push_back(i);
                        temp.push_back(j);
                        ans.push_back(temp);
                    };
                }
            }

            if(j + 1 >= len){
                if(goInDirection(grid, word, i, j, 0, -1)){
                    temp.clear();
                    temp.push_back(i);
                    temp.push_back(j);
                    ans.push_back(temp);
                };
            }

            if(i + 1 >= len){
                if(goInDirection(grid, word, i, j, -1, 0)){
                    temp.clear();
                    temp.push_back(i);
                    temp.push_back(j);
                    ans.push_back(temp);
                }

                if(j + 1 >= len){
                    if(goInDirection(grid, word, i, j, -1, -1)){
                        temp.clear();
                        temp.push_back(i);
                        temp.push_back(j);
                        ans.push_back(temp);
                    };
                    if(goInDirection(grid, word, i, j, -1, 1)){
                        temp.clear();
                        temp.push_back(i);
                        temp.push_back(j);
                        ans.push_back(temp);
                    };
                }
            }
        }
    }

    return ans;
}


int main(){
    auto program_time_start = high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll cases, i, j, rows, cols;
    cin >> cases;
    vector<vector<char>> grid;
    vector<char> temp;
    char abc;

    while (cases --){
        cin >> rows >> cols;
        
        for(i = 0; i < rows; i ++){
            temp.clear();
            for(j = 0; j < cols; j ++){
                cin >> abc;
                temp.push_back(abc);
            }
            grid.push_back(temp);
        }


    }
    
    
    auto program_time_stop = high_resolution_clock::now();
    cout << "\n\n\033[0;33mTime taken : " << (duration_cast<milliseconds>(program_time_stop - program_time_start).count()) << " milliseconds\033[0m\n";
}
