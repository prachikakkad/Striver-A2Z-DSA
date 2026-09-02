#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[low];
    int i = low, j = high;

    while (i < j) {
        while (arr[i] <= pivot && i <= high - 1) i++;
        while (arr[j] > pivot && j >= low + 1) j--;
        if (i < j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]); // place pivot at its correct position
    return j;                // partition index
}

void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pIndex = partition(arr, low, high);
        quickSort(arr, low, pIndex - 1);   // sort left part
        quickSort(arr, pIndex + 1, high);  // sort right part
    }
}

void printArr(vector<int>& arr) {
    for (int x : arr) cout << x << " ";
    cout << endl;
}

int main() {
    vector<int> arr = {13, 46, 24, 52, 20, 9};
    cout << "Before: "; printArr(arr);

    quickSort(arr, 0, arr.size() - 1);

    cout << "After:  "; printArr(arr);
    return 0;
}