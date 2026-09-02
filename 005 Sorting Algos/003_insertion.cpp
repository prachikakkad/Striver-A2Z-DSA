#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<int>& arr, int n) {
    for (int i = 0; i <= n - 1; i++) {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            swap(arr[j - 1], arr[j]);
            j--;
        }
    }
}

void printArr(vector<int>& arr) {
    for (int x : arr) cout << x << " ";
    cout << endl;
}

int main() {
    vector<int> arr = {13, 46, 24, 52, 20, 9};
    cout << "Before: "; printArr(arr);

    insertionSort(arr, arr.size());

    cout << "After:  "; printArr(arr);
    return 0;
}