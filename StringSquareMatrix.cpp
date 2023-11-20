#include <iostream>
#include <climits>
#include <stdexcept>
#include <cmath>
using namespace std;


void deleteMatrix(char** &mat) {
    if (mat != nullptr) {
        delete[] mat[0];
        delete[] mat;    
        mat = nullptr;
    }
}

char** createMatrix(int rows, int cols) {
    char** mat = new char*[rows];
    char* arr = new char[rows * cols];
    for (int i = 0; i < rows; i++) {
        mat[i] = &arr[i * cols];
    }
    return mat;
}

void fillMatrix(char** mat, int rows, int cols, const string& str) {
    if (mat != nullptr) {
        int strIndex = 0;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (strIndex < str.length()) {
                    mat[i][j] = str[strIndex++];
                } else {
                    mat[i][j] = ' '; 
                }
            }
        }
    }
}

int main() {
    string inputStr;
    cout << "Enter the string: ";
    getline(cin, inputStr);

    int strLength = inputStr.length();
    int sideLength = ceil(sqrt(strLength));

    int rows = sideLength;
    int cols = sideLength;

    cout << "Matrix dimensions: " << rows << " x " << cols << endl;

    char** matrix = createMatrix(rows, cols);
    fillMatrix(matrix, rows, cols, inputStr);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    deleteMatrix(matrix);
    return 0;
}
