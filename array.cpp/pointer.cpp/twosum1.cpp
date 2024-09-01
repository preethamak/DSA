#include <vector>
#include <unordered_map> // For unordered_map

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> mpp; // Using unordered_map for better performance
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            int num = nums[i];
            int required = target - num;
            if (mpp.find(required) != mpp.end()) {
                return {mpp[required], i};
            }
            mpp[num] = i;
        }
        return {-1, -1}; // Indicating that no valid pair was found
    }
};



