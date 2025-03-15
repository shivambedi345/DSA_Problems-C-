#include <iostream>
#include <vector>
using namespace std;

bool ispossible(vector<int>& arr, int n, int m, int mid) {
    int studentcount = 1;
    int pagesum = 0;
    for (int i = 0; i < n; i++) {
        if (pagesum + arr[i] <= mid) {
            pagesum += arr[i];
        } else {
            studentcount++;
            if (studentcount > m || arr[i] > mid) {
                return false;
            }
            pagesum = arr[i];
        }
    }
    return true;
}

int allocate_books(vector<int>& arr, int n, int m) {
    if (m > n) return -1; // More students than books is not possible

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    int s = 0, e = sum, ans = -1;
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (ispossible(arr, n, m, mid)) {
            ans = mid;
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }
    return ans;
}

int main() {
    int n, m;
    cout<<"Enter the number of books: "<<endl;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout<<"Enter the number of students: "<<endl;
    cin >> m;

    cout << allocate_books(arr, n, m) << endl;
    return 0;
}
