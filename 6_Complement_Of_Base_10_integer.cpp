#include <iostream>
using namespace std;

class Solution {
public:
    int bitwiseComplement(int n) {
        int m = n;
        int mask = 0;
        
        if (n == 0) {
            return 1;
        }

        while (m != 0) {
            mask = (mask << 1) | 1;
            m = m >> 1;
        }

        int ans = (~n) & mask;
        return ans;
    }
};

int main() {
    Solution sol;
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    int result = sol.bitwiseComplement(num);
    cout << "Bitwise complement: " << result << endl;

    return 0;
}
