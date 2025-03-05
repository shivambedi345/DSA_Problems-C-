#include <iostream>
using namespace std;

class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        while (n != 0) {
            if (n & 1) {
                count++;
            }
            n = n >> 1;
        }
        return count;
    }
};

int main() {
    Solution sol;
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    int result = sol.hammingWeight(num);
    cout << "Number of 1 bits (Hamming Weight): " << result << endl;

    return 0;
}
