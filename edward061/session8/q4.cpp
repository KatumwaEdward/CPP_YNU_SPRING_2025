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

void swapMiddleElements(int arr[4][4]) {

    for (int i = 0; i < 4; i++) {
        int temp = arr[1][i];
        arr[1][i] = arr[2][i]; 
        arr[2][i] = temp; 
    }

    for (int i = 0; i < 4; i++) {
        int temp = arr[i][1]; 
        arr[i][1] = arr[i][2];  
        arr[i][2] = temp;  
    }
}

int main() {
    int arr[4][4]; 

    inputMatrix(arr);

    cout << "\nMatrix before swapping the middle rows and columns:\n";
    displayMatrix(arr);

    swapMiddleElements(arr);

    cout << "\nMatrix after swapping the middle rows and columns:\n";
    displayMatrix(arr);

    return 0;
}
