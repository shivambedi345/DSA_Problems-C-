#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; // Handle cases where k is larger than n
        vector<int> temp(n);
        for (int i = 0; i < n; i++) {
            temp[(i + k) % n] = nums[i];
        }
        // Copy temp into nums
        nums = temp;
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7}; 
    int k = 3;

    Solution sol;
    sol.rotate(nums, k);

    
    cout << "Rotated array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
