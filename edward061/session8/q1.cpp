#include <iostream>
using namespace std;

int main() {
    int mat[4][4] = {
        {1, 1, 1, 1},
        {2, 2, 2, 2},
        {3, 3, 3, 3},
        {4, 4, 4, 4}
    };

    cout << "Original matrix: " << endl;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    int transpose[4][4];
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            transpose[j][i] = mat[i][j];
        }
    }

    cout << "Transposed matrix: " << endl;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}





