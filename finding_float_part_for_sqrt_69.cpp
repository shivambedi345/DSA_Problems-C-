#include <iostream>
using namespace std;

int integer_sqrt(int n) {
    int s = 0;
    int e = n;
    int ans = -1;
    while (s <= e) {
        long long int mid = s + (e - s) / 2;
        long long int square = mid * mid;

        if (square == n) {
            return mid;
        }
        if (square < n) {
            ans = mid;
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return ans;
}

double more_precise_sqrt(int n, int precision, int temp) {
    double factor = 1;
    double ans = temp;

    for (int i = 0; i < precision; i++) {
        factor = factor / 10;
        for (double j = ans; j * j <= n; j = j + factor) {
            ans = j;
        }
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int temp = integer_sqrt(n); // Get integer square root
    cout << "The square root is: " << more_precise_sqrt(n, 3, temp) << endl;

    return 0;
}
