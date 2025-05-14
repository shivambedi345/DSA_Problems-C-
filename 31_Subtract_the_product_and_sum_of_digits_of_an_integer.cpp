#include <iostream>
using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod = 1;
        int sum = 0;

        while (n != 0) {
            int digit = n % 10;
            prod *= digit;
            sum += digit;
            n /= 10;
        }
        return prod - sum;
    }
};

int main() {
    Solution sol;
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    int result = sol.subtractProductAndSum(num);
    cout << "Result (Product - Sum): " << result << endl;

    return 0;
}
