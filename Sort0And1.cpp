#include<iostream>
#include<vector>
using namespace std;
void sort01(int n, vector<int> &arr){
    int first = 0, mid = 0 , last = n-1;
    while(first <= last){
        if(arr[mid] == 0){
            swap(arr[first], arr[mid]);
            first++;
            mid++;
        }
        else {
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
    cout << "Enter the elements of the array (0s and 1s): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort01(n, arr);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
// This code sorts an array of 0s and 1s using the Dutch National Flag algorithm.