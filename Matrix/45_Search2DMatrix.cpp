#include<bits/stdc++.h>
using namespace std;


bool searchMatrix(vector<vector<int>> matrix, int target) {
    int i = 0, j = 0, max_i = matrix.size() - 1, max_j = matrix[0].size() - 1;
    if(target < matrix[0][0] || target > matrix[max_i][max_j]){
        return false;
    }

    while(i <= max_i){
        if(target >= matrix[i][0] && target <= matrix[i][max_j]){
            for(j = 0; j <= max_j; j ++){
                if(target == matrix[i][j]){
                    return true;
                    break;
                }
            }
            if(j != max_j + 1){
                return false;
            }
        }
        i ++;
    }

    return false;
}


int main(){
    int rows, columns, i, j, temp, target;
    vector<vector<int>> matrix;
    vector<int> oneRow;
    cout << "Number of rows : ";
    cin >> rows;
    cout << "Number of cols : ";
    cin >> columns;

    cout <<  "Matrix : ";
    for(i = 0; i < rows; i ++){
        oneRow.clear();
        for(j = 0; j < columns; j ++){
            cin >> temp;
            oneRow.push_back(temp);
        }
        matrix.push_back(oneRow);
    }

    cout << "Target : ";
    cin >> target;

    cout << searchMatrix(matrix, target) << endl;

}
    