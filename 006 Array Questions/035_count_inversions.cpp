#include <iostream>
#include <vector>

using namespace std;

// This utility function merges two sorted halves and counts inversions
long long merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp; // Temporary array to store merged elements
    int left = low;      // Starting index of left half
    int right = mid + 1; // Starting index of right half

    long long cnt = 0; // Inversion counter for this merge step

    // Compare elements from left and right halves
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } 
        else {
            // MAGIC MOMENT: If arr[right] is smaller, it is smaller than 
            // ALL remaining elements in the left half!
            temp.push_back(arr[right]);
            cnt += (mid - left + 1); // Add all remaining left elements at once
            right++;
        }
    }

    // Copy remaining elements of left half, if any
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    // Copy remaining elements of right half, if any
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // Transfer elements from temporary vector back to original array
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }

    return cnt;
}

// Recursive Merge Sort function that accumulates inversion counts
long long mergeSort(vector<int> &arr, int low, int high) {
    long long cnt = 0;
    if (low >= high) return cnt;
    
    int mid = low + (high - low) / 2;
    
    cnt += mergeSort(arr, low, mid);      // Count inversions in left half
    cnt += mergeSort(arr, mid + 1, high); // Count inversions in right half
    cnt += merge(arr, low, mid, high);    // Count split inversions during merge
    
    return cnt;
}

int main() {
    vector<int> arr = {2, 4, 1, 3, 5};
    int n = arr.size();
    
    long long totalInversions = mergeSort(arr, 0, n - 1);
    
    cout << "Total Number of Inversions: " << totalInversions << endl;
    
    return 0;
}
