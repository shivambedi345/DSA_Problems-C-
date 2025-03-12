class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
    


    vector<int> duplicates;

    for (int i = 0; i < nums.size(); i++) {
        
        int index = abs(nums[i]) - 1;

        
            duplicates.push_back(abs(nums[i]));
        } else {
            
            nums[index] = -nums[index];
        }
    }

    return duplicates;
}

int main() {
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
    
    vector<int> result = findDuplicates(nums);

    cout << "Duplicates: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

    };
