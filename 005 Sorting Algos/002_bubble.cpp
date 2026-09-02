#include <iostream>
#include <vector>

using namespace std;
 
void bubbleSort(vector<int>& arr, int n) {
    for (int i = n - 1; i >= 1; i--) {
        bool didSwap = false;
        for (int j = 0; j <= i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                didSwap = true;
            }
        }
        if (!didSwap) break; // nothing swapped means array is already sorted
    }
}
 
void printArr(vector<int>& arr) {
    for (int x : arr) cout << x << " ";
    cout << endl;
}
 
int main() {
    vector<int> arr = {13, 46, 24, 52, 20, 9};
    cout << "Before: "; printArr(arr);
 
    bubbleSort(arr, arr.size());
 
    cout << "After:  "; printArr(arr);
    return 0;
}
 