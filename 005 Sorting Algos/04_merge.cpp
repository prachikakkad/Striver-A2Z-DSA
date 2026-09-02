#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low, right = mid + 1;

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) temp.push_back(arr[left++]);
        else temp.push_back(arr[right++]);
    }
    while (left <= mid) temp.push_back(arr[left++]);
    while (right <= high) temp.push_back(arr[right++]);

    for (int i = low; i <= high; i++) arr[i] = temp[i - low];
}

void mergeSort(vector<int>& arr, int low, int high) {
    if (low >= high) return; // base case: single element, already sorted
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);       // sort left half
    mergeSort(arr, mid + 1, high);  // sort right half
    merge(arr, low, mid, high);     // merge the two sorted halves
}

void printArr(vector<int>& arr) {
    for (int x : arr) cout << x << " ";
    cout << endl;
}

int main() {
    vector<int> arr = {13, 46, 24, 52, 20, 9};
    cout << "Before: "; printArr(arr);

    mergeSort(arr, 0, arr.size() - 1);

    cout << "After:  "; printArr(arr);
    return 0;
}