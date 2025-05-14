#include <iostream>
#include <cmath> 
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        for (int i = 0; i <= 30; i++) {
            int ans = pow(2, i);
            if (ans == n) {
                return true;
            }
        }
        return false;
    }
};

int main() {
    Solution sol;
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (sol.isPowerOfTwo(num)) {
        cout << num << " is a power of two.\n";
    } else {
        cout << num << " is NOT a power of two.\n";
    }

    return 0;
}
