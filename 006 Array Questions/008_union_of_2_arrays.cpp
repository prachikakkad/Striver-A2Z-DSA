#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> nums1, nums2, result;

    nums1.push_back(7);
    nums1.push_back(18);
    nums1.push_back(33);
    nums1.push_back(45);
    nums1.push_back(63);

    nums2.push_back(2);
    nums2.push_back(3);
    nums2.push_back(4);
    nums2.push_back(29);
    nums2.push_back(33);
    nums2.push_back(45);

    int n1 = nums1.size();
    int n2 = nums2.size();

    int i = 0, j = 0, value = 0;

    while (i < n1 && j < n2)
    {
        if (nums1[i] < nums2[j])
        {
            value = nums1[i];
            i++;
        }
        else if (nums1[i] > nums2[j])
        {
            value = nums2[j];
            j++;
        }
        else
        {
            value = nums1[i];
            i++;
            j++;
        }
        if (result.empty() || result.back() != value)
        {
            result.push_back(value);
        }
    }

    while (i < n1)
    {
        if (result.empty() || nums1[i] != result.back())
        {
            value = nums1[i];
            result.push_back(value);
        }
        i++;
    }
    while (j < n2)
    {
        if (result.empty() || nums2[j] != result.back())

        {
            value = nums2[j];
            result.push_back(value);
        }
        j++;
    }

    for(int x : result){
        cout << x << " ";
    }

    return 0;
}