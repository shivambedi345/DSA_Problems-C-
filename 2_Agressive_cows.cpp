#include <iostream>
#include <vector>
#include <algorithm>  
using namespace std;

bool isPossible(vector<int>& stalls, int k, int mid) {
    int cowCount = 1;
    int lastPos = stalls[0];

    for (int i = 1; i < stalls.size(); i++) {
        if (stalls[i] - lastPos >= mid) {
            cowCount++;
            if (cowCount == k) {
                return true;
            }
            lastPos = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int>& stalls, int k) {
    sort(stalls.begin(), stalls.end());  

    int s = 0;
    int maxi = stalls[stalls.size() - 1] - stalls[0]; 
    int e = maxi;
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (isPossible(stalls, k, mid)) {
            ans = mid;
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return ans;
}

int main() {
    vector<int> stalls = {1, 2, 8, 4, 9};
    int k = 3;

    cout << "Largest minimum distance: " << aggressiveCows(stalls, k) << endl;

    return 0;
}
