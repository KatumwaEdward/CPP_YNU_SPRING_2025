#include <iostream>
using namespace std;

void inputMatrix(int arr[4][4]) {
    cout << "Enter the elements of the 4x4 matrix:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Element at position (" << i + 1 << "," << j + 1 << "): ";
            cin >> arr[i][j];
        }
    }
}

void displayMatrix(int arr[4][4]) {
    cout << "The matrix is:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int calculateDiagonalsSum(int arr[4][4]) {
    int mainDiagonalSum = 0;
    int secondaryDiagonalSum = 0;

    for (int i = 0; i < 4; i++) {
        mainDiagonalSum += arr[i][i];  
        secondaryDiagonalSum += arr[i][3 - i];  
    }

    return mainDiagonalSum + secondaryDiagonalSum;
}

int main() {
    int arr[4][4];  

    inputMatrix(arr);

    displayMatrix(arr);

    int totalSum = calculateDiagonalsSum(arr);

    cout << "The sum of the elements on both diagonals is: " << totalSum << endl;

    return 0;
}
