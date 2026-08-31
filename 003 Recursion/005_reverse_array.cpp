#include <iostream>

using namespace std;

void reverse(int arr[], int n){
        
    int left = 0, right = n-1;

    while(left <= right){
        swap(arr[left], arr[right]);
        right--;
        left++;
    }
}

int main() {

    int arr[4] = {1, 2, 3, 4};
    int size = 4;

    reverse(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    

    return 0;
}