#include <iostream>
using namespace std;

void multiplyMatrices(int mat1[4][4], int mat2[4][4], int res[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            res[i][j] = 0;
            for (int k = 0; k < 4; k++) {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

bool checkMatrixEquality(int res[4][4], int expectedRes[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (res[i][j] != expectedRes[i][j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {

    int mat1[4][4] = {{1, 2, 3, 4}, {0, 1, 0, 0}, {0, 0, 1, 0}, {0, 0, 0, 1}};
    int mat2[4][4] = {{1, 0, 0, 0}, {0, 1, 0, 0}, {0, 0, 1, 0}, {0, 0, 0, 1}};
    int expectedRes[4][4] = {{1, 2, 3, 4}, {0, 1, 0, 0}, {0, 0, 1, 0}, {0, 0, 0, 1}};

    int res[4][4];

    multiplyMatrices(mat1, mat2, res);

    if (checkMatrixEquality(res, expectedRes)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
