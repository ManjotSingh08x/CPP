#include <iostream>
#include <vector>
using namespace std;

void printMatrix(vector<vector<int>> matrix){
    for(int i = 0; i < (int)matrix.size(); i++){
        for(int j = 0; j < (int)matrix[0].size(); j++){
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }
}

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    int columns;
    cout << "Enter number of columns: ";
    cin >> columns;
    vector<vector<int>> matrix;
    for(int i = 0; i < rows;i++){
        vector<int> row;
        for(int j = 0; j < columns; j++){
            cout << "Enter value at" << i + 1 << ',' << j + 1 << ": ";
            int value;
            cin >> value;
            row.push_back(value);
        }
        matrix.push_back(row);
    }
    cout << "Your matrix is: \n";
    printMatrix(matrix);

    vector<vector<int>> transpose;
    for(int i = 0; i < (int)matrix[0].size(); i++){
        vector<int> row;
        for(int j = 0; j < (int)matrix.size(); j++){
            row.push_back(matrix[j][i]);
        }
        transpose.push_back(row);
    }
    cout << "Its transpose is: \n";
    printMatrix(transpose);
    return 0;
}