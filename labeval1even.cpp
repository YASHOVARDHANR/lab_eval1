#include <iostream>
#include <vector>

using namespace std;


int determinant2x2(const vector<vector<int>>& matrix) {
    return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
}
int determinant3x3(const vector<vector<int>>& matrix) {
    return matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]) -
           matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]) +
           matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);
}

int main() {
    int n;

    cout << "Enter the size of the matrix (2 or 3): ";
    cin >> n;

    if (n != 2 && n != 3) {
        cout << "Only 2x2 and 3x3 matrices are supported." << endl;
        return 1;
    }

    vector<vector<int>> matrix(n, vector<int>(n));

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    int determinant = 0;

    if (n == 2) {
        determinant = determinant2x2(matrix);
    } else if (n == 3) {
        determinant = determinant3x3(matrix);
    }

    cout << "The determinant of the matrix is: " << determinant << endl;

    return 0;
}
