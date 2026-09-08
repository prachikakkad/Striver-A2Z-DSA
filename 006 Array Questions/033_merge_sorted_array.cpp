#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> nums1 = {1,2,3,0,0,0}, nums2 = {2,5,6};
    int m = 3, n = 3;
    int p1 = m-1;
    int p2 = n-1;
    int right = m+n-1;

    while(p2 >=0){
        if(p1 >= 0 && nums1[p1] > nums2[p2]){
            nums1[right] = nums1[p1];
            p2--;
        }
        else{
            nums1[right] = nums2[p2];
            p1--;
        }

        right--;
    }

    for(int x : nums1){
        cout << x << " ";
    }
    return 0;
}