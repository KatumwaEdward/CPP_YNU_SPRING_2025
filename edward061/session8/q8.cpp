#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

template <typename T>
T findLargestElement(const vector<T>& arr) {

    T largest = *max_element(arr.begin(), arr.end());
    return largest;
}

int main() {
    int n, K;
    cout << "Enter the size of the array (n): ";
    cin >> n;
    cout << "Enter the data type of the array (1 for int, 2 for float): ";
    cin >> K;

    if (K == 1) { 
        vector<int> arr(n);
        cout << "Enter the elements of the array:" << endl;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        int largest = findLargestElement(arr);
        cout << "The largest element in the array is: " << largest << endl;
    } else if (K == 2) { 
        vector<float> arr(n);
        cout << "Enter the elements of the array:" << endl;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        float largest = findLargestElement(arr);
        cout << "The largest element in the array is: " << largest << endl;
    } else {
        cout << "Invalid input for K. Please enter 1 for int or 2 for float." << endl;
    }

    return 0;
}
