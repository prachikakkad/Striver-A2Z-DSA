#include <iostream>
#include <vector>

using namespace std;
 
void selectionSort(vector<int>& arr, int n) {
    for (int i = 0; i <= n - 2; i++) {
        int mini = i; // assume this is the smallest for now
        for (int j = i; j <= n - 1; j++) {
            if (arr[j] < arr[mini]) mini = j;
        }
        swap(arr[mini], arr[i]);
    }
}
 
void printArr(vector<int>& arr) {
    for (int x : arr) cout << x << " ";
    cout << endl;
}
 
int main() {
    vector<int> arr = {13, 46, 24, 52, 20, 9};
    cout << "Before: "; printArr(arr);
 
    selectionSort(arr, arr.size());
 
    cout << "After:  "; printArr(arr);
    return 0;
}
 