#include <vector>   // for vector
#include <algorithm> // for sort

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // Sort the vector
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) { // Check for duplicates
                return true;
            }
        }
        return false;
    }
};
