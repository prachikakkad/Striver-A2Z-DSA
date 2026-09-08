#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm> 

using namespace std;

int main() {

    vector<int> arr = {4, 2, 2, 6, 4};
    unordered_map<int, int> m;
    int count = 0, target = 6, current = 0;
    
    int n = arr.size();

    m[0] = 1;

    for(int i = 0; i < n; i++){
        
        current = current ^ arr[i];
        
        int x = current ^ target;

        if (m.find(x) != m.end()) {

            count = count + m[x];

        } 
        
        m[current]++;
    }

    cout << count;
    
    return 0;
}