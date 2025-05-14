#include<iostream>
#include<vector>
using namespace std;
void sort012(int n, vector<int> &arr) {
    int low = 0, mid = 0, last = n - 1;
    while (mid <= last) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        } else if (arr[mid] == 1) {
            mid++;
        } else {// arr[mid] == 2
            // Swap arr[mid] with arr[last] and decrement last
            swap(arr[mid], arr[last]);
            last--;
        }
    }
}
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array (0s, 1s, and 2s): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort012(n, arr);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}