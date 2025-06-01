#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

template <typename T>
void sortArray(vector<T>& arr) {
    sort(arr.begin(), arr.end()); 
}

template <typename T>
void printArray(const vector<T>& arr) {
    for (const auto& element : arr) {
        cout << element << " ";
    }
    cout << endl;
}

int main() {
    int T;
    cin >> T;  
    
    while (T--) {
        int n, q;
        cin >> n >> q;  
        
        if (q == 1) { 
            vector<int> arr(n);
            for (int i = 0; i < n; ++i) {
                cin >> arr[i];
            }
            sortArray(arr);  
            printArray(arr);  
        } 
        else if (q == 2) { 
            vector<float> arr(n);
            for (int i = 0; i < n; ++i) {
                cin >> arr[i];
            }
            sortArray(arr);  
            printArray(arr);  
        } 
        else if (q == 3) { 
            vector<string> arr(n);
            for (int i = 0; i < n; ++i) {
                cin >> arr[i];
            }
            sortArray(arr);  
            printArray(arr); 
        }
    }
    
    return 0;
}
