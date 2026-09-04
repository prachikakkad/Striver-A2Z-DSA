#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    
    int largest = INT_MIN, secondLargest = INT_MIN;

    vector<int> vec;
    vec.push_back(33);
    vec.push_back(45);
    vec.push_back(18);
    vec.push_back(7);


    for(int x : vec){
        if(x > largest){
            secondLargest = largest;
            largest = x;
        }
        else if(x > secondLargest && x != largest){
            secondLargest = x;
        }
    }

    if (secondLargest == INT_MIN)
    {
        secondLargest = -1;
    }
    
    
    cout << "Second Largest element is : " << secondLargest;


    return 0;
}