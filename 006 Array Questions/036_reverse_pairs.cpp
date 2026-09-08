#include <iostream>
#include <vector>

using namespace std;

// Separate utility function to count reverse pairs before merging
int countPairs(vector<int> &arr, int low, int mid, int high) {
    int right = mid + 1;
    int cnt = 0;
    
    // Sweep the left half and find matching elements in the right half
    for (int i = low; i <= mid; i++) {
        // Explicit long long cast prevents integer overflow when multiplying by 2
        while (right <= high && arr[i] > 2LL * arr[right]) {
            right++;
        }
        cnt += (right - (mid + 1));
    }
    return cnt;
}

// Standard Merge utility to sort elements into place
void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

// Recursive function that coordinates the counting and sorting stages
int mergeSort(vector<int> &arr, int low, int high) {
    int cnt = 0;
    if (low >= high) return cnt;
    
    int mid = low + (high - low) / 2;
    
    cnt += mergeSort(arr, low, mid);      // Count in left side
    cnt += mergeSort(arr, mid + 1, high); // Count in right side
    cnt += countPairs(arr, low, mid, high); // Count crossing reverse pairs
    merge(arr, low, mid, high);           // Sort elements
    
    return cnt;
}

int main() {
    vector<int> nums = {4, 2, 2, 6, 4};
    int n = nums.size();
    
    cout << "Total Reverse Pairs: " << mergeSort(nums, 0, n - 1) << endl;
    
    return 0;
}
